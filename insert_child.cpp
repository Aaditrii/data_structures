#include<iostream>
#include<cstdlib>
#include<queue>
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
Node* construct_binary_tree(Node* root,int i,int arr[100],int k){
	if(i<k){
		Node* new_node=new Node(arr[i]);
		root=new_node;
		if(arr[2*i+1]!=-1)
			root->next[0]=construct_binary_tree(root->next[0],2*i+1,arr,k);
		if(arr[2*i+2]!=-1)
			root->next[1]=construct_binary_tree(root->next[1],2*i+2,arr,k);
	}
	return root;
}
void insert_child(Node* root,int value){
	queue<Node*>q;
	q.push(root);
	while(!(q.empty())){
		Node* temp=q.front();
		q.pop();
		if(!(temp->next[0])){
			temp->next[0]=new Node(value);
			break;
		}
		else{
			q.push(temp->next[0]);
		}
		if(!(temp->next[1])){
			temp->next[1]=new Node(value);
			break;
		}
		else
			q.push(temp->next[1]);
	}
}
void print_tree_inorder(Node* root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	print_tree_inorder(root->next[0]);
	print_tree_inorder(root->next[1]);
}
int main(int argc,const char* argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int value=atoi(argv[argc-1]);
	Node* root=construct_binary_tree(root,0,arr,k);
	insert_child(root,value);
	print_tree_inorder(root);
	return 0;
}

