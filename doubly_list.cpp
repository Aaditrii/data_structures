#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next[2];
};
void insert_at_beg(Node** head,int new_data){
	Node* temp=*head;
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next[0]=*head;
	new_node->next[1]=NULL;
	*head=new_node;
	if(temp!=NULL)
	temp->next[1]=new_node;
}
void print_list_forward(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next[0];
	}
	cout<<endl;
}
void print_list_backward(Node* head){
	while(head->next[0]!=NULL){
		head=head->next[0];
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next[1];
	}
}
int main(int argc,const char* argv[]){
	Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		insert_at_beg(&head,atoi(argv[i]));
	}
	print_list_forward(head);
	print_list_backward(head);
	return 0;
}
