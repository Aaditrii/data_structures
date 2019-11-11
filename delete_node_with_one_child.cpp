#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
          double    data;
	Node* next[2];
	Node(float data){
		this->data=data;
		next[0]=next[1]=NULL;
	}
};
Node* insert(Node* root,float value){
	if(root==NULL)
		return new Node(value);
	if(root->data>value)
		root->next[0]=insert(root->next[0],value);
	if(root->data<value)
		root->next[1]=insert(root->next[1],value);
	return root;
}
Node* delete_node(Node* root,float value){
	if(root->data==value&&root->next[0]==NULL){
		Node* temp=root->next[1];
		free(root);
		return temp;
	}
	if(root->data==value&&root->next[1]==NULL){
		Node* temp=root->next[0];
		free(root);
		return temp;
	}
	if(value>root->data)
		root->next[1]=delete_node(root->next[1],value);
	if(value<root->data)
		root->next[0]=delete_node(root->next[0],value);
	return root;
}

void print_inorder(Node* root){
	if(root==NULL)
		return;
	print_inorder(root->next[0]);
	cout<<root->data<<" ";
	print_inorder(root->next[1]);
}
int main(int argc,const char* argv[]){
	Node* root=NULL;
	root=insert(root,atoi(argv[1]));
	for(int i=2;i<argc-1;i++)
		root=insert(root,atof(argv[i]));
	float value=atof(argv[argc-1]);
	root=delete_node(root,value);
	print_inorder(root);
	return 0;
}

