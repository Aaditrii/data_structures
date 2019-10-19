#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next[2];
	Node(int data){
		this->data=data;
		next[0]=next[1]=NULL;
	}
};
Node* construct_binary_tree(int arr[100],Node* root,int i,int k){
	if(i<k){
	Node* new_node=new Node(arr[i]);
	root=new_node;
	if(arr[2*i+1]!=-1)
	root->next[0]=construct_binary_tree(arr,root->next[0],2*i+1,k);
        if(arr[2*i+2]!=-1)
	root->next[1]=construct_binary_tree(arr,root->next[1],2*i+2,k);
	}
	return root;

}
void print_tree(Node* root){
	if(root==NULL)
		return;
	print_tree(root->next[0]);
	cout<<root->data<<" ";
	print_tree(root->next[1]);
}
int main(int argc,const char* argv[]){
	int arr[100];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root;
	root=construct_binary_tree(arr,root,0,k);
	cout<<root->data<<" ";
	print_tree(root);
	return 0;
}

