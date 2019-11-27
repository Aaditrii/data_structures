#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
class Node{
	public:
		int data;
		Node* next[2];
		Node(int data){
			this->data = data;
			next[0] = next[1] = NULL;
		}
};
Node* construct_tree(Node* root,int arr[],int i,int k){
	if(i<k){
		Node* node = new Node(arr[i]);
		root=node;
		if(arr[2*i+1]!=-1)
			root->next[0] = construct_tree(root->next[0],arr,2*i+1,k);
		if(arr[2*i+2]!=-1)
			root->next[1] = construct_tree(root->next[1],arr,2*i+2,k);
	}
	return root;
}
Node* temp;
void mirror_construct(Node* root){
	if(root==NULL)
		return;
	mirror_construct(root->next[0]);
	mirror_construct(root->next[1]);
	if(root->next[0]!=NULL&&root->next[1]!=NULL){
		temp=root->next[0];
		root->next[0]=root->next[1];
		root->next[1]=temp;
	}
	if(root->next[0]!=NULL&&root->next[1]==NULL){
		temp=root->next[1];
		root->next[1]=root->next[0];
		root->next[0]=temp;
	}
	if(root->next[1]!=NULL&&root->next[0]==NULL){
		temp=root->next[1];
		root->next[1]=root->next[0];
		root->next[0]=temp;
	}
}
void print_preorder(Node* root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	print_preorder(root->next[0]);
	print_preorder(root->next[1]);
}
int main(int argc,const char* argv[]){
	int arr[100], k = 0;
	for(int i = 1 ; i < argc ; i++)
		arr[k++] = atoi(argv[i]);
	Node* root;
	root = construct_tree(root,arr,0,k);
	mirror_construct(root);
	print_preorder(root);
	return 0;
}
