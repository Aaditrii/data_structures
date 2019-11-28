#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
Node* move_last_node(Node* head){
	Node* head1 = head;
	Node* temp;
	while(head1->next->next != NULL){
		head1 = head1->next;
	}
	temp = head1->next;
	head1->next = NULL;
	temp->next = head;
	head = temp;
	return head;
}
void print_list(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
};
int main(int argc,const char* argv[]){
	Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		Node* temp=new Node();
		temp->data=atoi(argv[i]);
		temp->next=head;
		head=temp;
	}
	head=move_last_node(head);
	print_list(head);
	return 0;
}

