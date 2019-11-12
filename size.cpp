#include<iostream>
#include<cstdlib>
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
Node* construct_bst(Node* root,string arr[100],int i,int k){
	if(i<k){
		Node* new_node=new Node(arr[i]);
		root=new_node;
		if(arr[2*i+1]!="_")
			root->next[0]=construct_bst(root->next[0],arr,2*i+1,k);
		if(arr[2*i+2]!="_")
			root->next[1]=construct_bst(root->next[1],arr,2*i+2,k);
	}
	return root;
}
int tree_size(Node* root){
	if(root==NULL)
		return 0;
	return(tree_size(root->next[0]))+1+(tree_size(root->next[1]));
}
int main(int argc,const char* argv[]){
	string arr[100];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	Node* root;
	root=construct_bst(root,arr,0,k);
	int size=tree_size(root);
	cout<<size;
	return 0;
}

