#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next[2];
};
void insert_at_end(Node* head,int data1){
	while(head->next[0]!=NULL)
		head=head->next[0];
	Node* temp=head;
	Node* new_node=new Node();
	new_node->data=data1;
	new_node->next[0]=NULL;
	new_node->next[1]=temp;
	temp->next[0]=new_node;
}
void print_list(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next[0];
	}
}
int main(int argc,const char* argv[]){
	Node *head=NULL;
	for(int i=argc-2;i>=1;i--){
		Node* temp=head;
		Node* new_node=new Node();
		new_node->data=atoi(argv[i]);
		new_node->next[0]=head;
		new_node->next[1]=NULL;
		head=new_node;
		if(temp!=NULL)
			temp->next[1]=new_node;
	}
	int data1=atoi(argv[argc-1]);
	insert_at_end(head,data1);
	print_list(head);
	return 0;
}
