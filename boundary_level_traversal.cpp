#include<iostream>
using namespace std;
class Node{
	public:
		string data;
		Node* next[2];
		Node(string data){
			this->data=data;
			next[0]=next[1]=NULL;
		}
};
Node* construct_binary_tree(string arr[100],Node* root,int i,int k){
	if(i<k){
		Node* new_node=new Node(arr[i]);
		root=new_node;
		if(arr[2*i+1]!="_")
			root->next[0]=construct_binary_tree(arr,root->next[0],2*i+1,k);
		if(arr[2*i+2]!="_")
			root->next[1]=construct_binary_tree(arr,root->next[1],2*i+2,k);
	}
	return root;
}
void printleaves(Node* root){
	if(root==NULL)
		return;
	printleaves(root->next[0]);
	if(!(root->next[0])&&!(root->next[1])){
		cout<<root->data<<" ";
	}
	printleaves(root->next[1]);
}
void printleftBoundary(Node* root){
	if(root==NULL)
		return;
	if(root->next[0]){
		cout<<root->data<<" ";
		printleftBoundary(root->next[0]);
	}
	else if(root->next[1]){
		cout<<root->data<<" ";
		printleftBoundary(root->next[1]);
	}
}
void printrightBoundary(Node* root){
	if(root==NULL)
		return;
	if(root->next[1]){
		cout<<root->data<<" ";
		printleftBoundary(root->next[1]);
	}
	else if(root->next[0]){
		cout<<root->data<<" ";
		printleftBoundary(root->next[0]);
	}
}
void printBoundary(Node* root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	printleftBoundary(root->next[0]);
	printleaves(root->next[0]);
	printleaves(root->next[1]);
	printrightBoundary(root->next[1]);
}
int main(int argc,const char* argv[]){
	string arr[100];
	int k=0;
	Node* root;
	for(int i=1;i<argc;i++)
		arr[k++]=argv[i];
	root=construct_binary_tree(arr,root,0,k);
	printBoundary(root);
	return 0;
}

