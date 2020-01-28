#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
int check_palindrome(Node* head){
	int f=0;
	int count=0,count1=0;
	Node* head1=head;
	Node* head2=head;
	Node* head4=head;
	Node* head3;
	while(head1!=NULL){
		count++;
		head1=head1->next;
	}
	int n=count/2;
	while(head2!=NULL){
		count1++;
		if(count1==n){
			head3=head2->next;
			head2->next=NULL;
			break;
		}
		head2=head2->next;
	}
	Node* current=head;
	Node* prev=NULL;
	Node* next1;
	while(current!=NULL){
		next1=current->next;
		current->next=prev;
		prev=current;
		current=next1;
	}
	head=prev;
	while(head!=NULL&&head3!=NULL){
		if(head->data==head3->data)
			f=1;
		else{
			f=0;
			break;
		}
		head=head->next;
		head3=head3->next;
	}
	return f;
}
int main(int argc,const char* argv[]){
	Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		Node* temp=new Node();
		temp->data=atoi(argv[i]);
		temp->next=head;
		head=temp;
	}
	int c=check_palindrome(head);
	if(c==1)
		cout<<"yes";
	else
		cout<<"no";
	return 0;
}
