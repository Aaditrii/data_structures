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
int  max_height(Node* root){
	if(root==NULL)
		return 0;
	int left=max_height(root->next[0]);
	int right=max_height(root->next[1]);
	if(left>right)
		return left+1;
	else 
		return right+1;
}
int main(int argc,const char* argv[]){
	Node* root=new Node(1);
	root->next[0]=new Node(2);
	root->next[1]=new Node(3);
	root->next[0]->next[0]=new Node(4);
	root->next[0]->next[1]=new Node(5);
	int maximum=max_height(root);
	cout<<maximum;
	return 0;
}


