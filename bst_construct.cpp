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
Node* insert(Node* head,int value){
	if(head==NULL)
		return new Node(value);
	if(value>head->data)
		head->next[1]=insert(head->next[1],value);
	if(value<head->data)
		head->next[0]=insert(head->next[0],value);
	return head;
	
	
}
void print(Node* root){
	if(root==NULL)
		return;
	print(root->next[0]);
	cout<<root->data<<" ";
	print(root->next[1]);
}	
int main(int argc,const char* argv[]){
	Node* head=NULL;
	head=insert(head,atoi(argv[1]));
	for(int i=2;i<argc;i++)
	head=insert(head,atoi(argv[i]));
	print(head);
	return 0;
}
