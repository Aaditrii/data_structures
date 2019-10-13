#include<iostream>
#include<cstdlib>
using namespace std;
class node{
	public:
	int data;
	node* next[2];
	node(int data){
		this->data=data;
		next[0]=next[1]=NULL;
	}
};
void print_post_order(node* node1){
	if(node1==NULL)
		return;
	print_post_order(node1->next[0]);
	print_post_order(node1->next[1]);
	cout<<node1->data<<" ";
}
int main(int argc,const char* argv[]){
	node* root=new node(1);
	root->next[0]=new node(2);
	root->next[1]=new node(3);
	root->next[0]->next[0]=new node(4);
	root->next[0]->next[1]=new node(5);
	print_post_order(root);
	return 0;
}


