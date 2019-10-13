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
void print_level_order(Node* root);
int height(Node* root);
void print_given_level(Node* root,int level);
void print_level_order(Node* root){
	if(root==NULL)
		return;
	else{
		int h=height(root);
		for(int i=1;i<=h;i++){
			print_given_level(root,i);
		}
	}
}
int height(Node* root){
	if(root==NULL)
		return 0;
	else{
		int ldepth=height(root->next[0]);
		int rdepth=height(root->next[1]);
		if(ldepth>rdepth)
			return ldepth+1;
		else
			return rdepth+1;
	}
}
void print_given_level(Node* root,int level){
	if(root==NULL)
		return;
	if(level==1)
		cout<<root->data<<" ";
	if(level>1){
		print_given_level(root->next[0],level-1);
		print_given_level(root->next[1],level-1);
	}
}
int main(int argc,const char * argv[]){
	Node* root=new Node(1);
	root->next[0]=new Node(2);
	root->next[1]=new Node(3);
	root->next[0]->next[0]=new Node(4);
	root->next[0]->next[1]=new Node(5);
	print_level_order(root);
	return 0;
}
