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
Node* insert(string arr[100],int i,int k,Node* root){
	if(i<k){
		Node* new_node=new Node(arr[i]);
		root=new_node;
		if(arr[2*i+1]!="_")
			root->next[0]=insert(arr,2*i+1,k,root->next[0]);
		if(arr[2*i+2]!="_")
			root->next[1]=insert(arr,2*i+2,k,root->next[1]);
	}
	return root;
}
Node* get_lca(Node* root,string key1,string key2){
	if(root==NULL)
		return NULL;
	if(root->data==key1||root->data==key2)
		return root;
	Node* left_lca=get_lca(root->next[0],key1,key2);
	Node* right_lca=get_lca(root->next[1],key1,key2);
	if(left_lca&&right_lca)
		return root;
	return (left_lca!=NULL) ? left_lca:right_lca;
}
int main(int argc,const char* argv[]){
	string arr[100];
	int n=argc-1,k=0;
	Node* root=NULL;
	for(int i=1;i<argc-2;i++)
		arr[k++]=argv[i];
	string key1=argv[argc-2];
	string key2=argv[argc-1];
	root=insert(arr,0,k,root);
	Node* a=get_lca(root,key1,key2);
	cout<<a->data;
	return 0;
}
