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
Node* construct_tree(Node* root,string arr[100],int i,int k){
	if(i<k){
		Node* node=new Node(arr[i]);
		root=node;
		if(arr[2*i+1]!="_")
			root->next[0]=construct_tree(root->next[0],arr,2*i+1,k);
		if(arr[2*i+2]!="_")
			root->next[1]=construct_tree(root->next[1],arr,2*i+2,k);
	}
	return root;
}
int any_depth(Node* root){
	int d=0;
	while(root!=NULL){
		d++;
		root=root->next[0];
	}
	return d;
}
bool check_tree(Node* root,int level,int d){
	if(root==NULL)
		return true;
	if(root->next[0]==NULL&&root->next[1]==NULL)
		return(d==level+1);
	if(root->next[0]==NULL||root->next[1]==NULL)
		return false;
	return check_tree(root->next[0],level+1,d)&&check_tree(root->next[1],level+1,d);
}
bool check_perfect_tree(Node* root){
	int d=any_depth(root);
	bool val=check_tree( root,0,d);
	return val;
}
int main(int argc,const char* argv[]){
	string arr[100];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=argv[i];
	Node* root=NULL;
	root=construct_tree(root,arr,0,k);
	bool b=check_perfect_tree(root);
	if(b==0)
		cout<<"false";
	else
		cout<<"true";
	return 0;
}
