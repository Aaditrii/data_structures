#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
Node* swap_list(Node* head){
	Node* temp;
	Node* temp1;
	int  temp2;
	while(head!=NULL&&head->next!=NULL){
		temp=head;
		temp1=head->next;
		temp2=temp->data;
		temp->data=temp1->data;
		temp1->data=temp2;
		head=head->next->next;
	}
}

void print_list(Node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
int main(int argc,const char* argv[]){
	Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		Node* temp=new Node();
		temp->data=atoi(argv[i]);
		temp->next=head;
		head=temp;
	}
	swap_list(head);
	print_list(head);
	return 0;
}


