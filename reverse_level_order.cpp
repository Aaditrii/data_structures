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
Node* construct_tree(Node* root,string arr[100],int i,int k){
	if(i<k){
		Node* new_node=new Node(arr[i]);
		root=new_node;
		if(arr[2*i+1]!="_")
			root->next[0]=construct_tree(root->next[0],arr,2*i+1,k);
		if(arr[2*i+2]!="_")
			root->next[1]=construct_tree(root->next[1],arr,2*i+2,k);
	}
	return root;
}
int height(Node* root){
	if(root==NULL)
		return 0;
	int ldepth=height(root->next[0]);
	int rdepth=height(root->next[1]);
	if(ldepth>rdepth)
		return ldepth+1;
	else
		return rdepth+1;
}
void print_reverse_level(Node* root,int level){
	if(root==NULL)
		return;
	if(level==1)
		cout<<root->data<<" ";
	if(level>1){
		print_reverse_level(root->next[0],level-1);
		print_reverse_level(root->next[1],level-1);
	}
}
void print_reverse_order(Node* root){
	if(root==NULL)
		return;
	int h=height(root);
	for(int i=h;i>=1;i--)
		print_reverse_level(root,i);
}
int main(int argc,const char* argv[]){
	string arr[100];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=argv[i];
	Node* root=NULL;
	root=construct_tree(root,arr,0,k);
	print_reverse_order(root);
	return 0;
}

