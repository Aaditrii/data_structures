#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next;

};
int detectLoop(Node* head){
	Node *slow=head,*fast=head;
	while(slow&&fast&&fast->next){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
			return 1;
	}
	return 0;
}
int main(int argc,const char* argv[]){
	Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		Node* temp=new Node();
		temp->data=atoi(argv[i]);
		temp->next=head;
		head=temp;
	}
	Node *temp=head,*s=NULL;
	while(temp!=NULL){
		s=temp;
		temp=temp->next;
	}
	s->next=head;
	int f=detectLoop(head);
	if(f==1)
		cout<<"yes loop exists";
	else
		cout<<"no loop doesnot exists";
	return 0;
}

