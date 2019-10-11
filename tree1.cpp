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
void print_pre(Node* node1){
	if(node1==NULL)
		return;
	cout<<node1->data<<" ";
	print_pre(node1->next[0]);
	print_pre(node1->next[1]);
}
int main(int argc,const char* argv[]){
	Node* root=new Node(1);
	root->next[0]=new Node(2);
	root->next[1]=new Node(3);
	root->next[0]->next[0]=new Node(4);
	root->next[0]->next[1]=new Node(5);
	print_pre(root);
	return 0;
}


