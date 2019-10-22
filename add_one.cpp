#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
void add_one(Node* head){
	Node* end=NULL;
	Node* current;
	int incr=0;
	int carry=1;
	if(head==NULL)
		return;
	do{
		current=head;
		incr=0;
		while(current->next!=end){
			current=current->next;
			incr=1;
		}
		current->data=current->data+carry;
		if(current->data==10){
			carry=1;
			current->data=0;
		}
		else
			carry=0;
		end=current;
	}while(incr);
	if(carry==1)
		head->data=head->data+1;
}
void print_list(Node* head){
	while(head!=NULL){
		cout<<head->data;
		head=head->next;
	}
}
int main(int argc,const char* argv[]){
	Node* head=NULL;
	int n=atoi(argv[1]);
	while(n!=0){
		Node* temp=new Node();
		int rem=n%10;
		temp->data=rem;
		temp->next=head;
		head=temp;
		n=n/10;
	}
	add_one(head);
	print_list(head);
	return 0;
}
