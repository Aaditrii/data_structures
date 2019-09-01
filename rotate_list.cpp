#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
Node* rotate_list(Node* head,int n){
	for(int i=0;i<n;i++){
		Node* head1=head;
		Node* temp1;
		while(head1->next->next!=NULL){
			head1=head1->next;
		}
		temp1=head1->next;
		head1->next=NULL;
		temp1->next=head;
		head=temp1;
	}
	return head;
}
void print_list(Node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
int main(int argc,const char* argv[]){
	int n=atoi(argv[argc-1]);
	Node* head=NULL;
	for(int i=argc-2;i>=1;i--){
		Node* temp=new Node();
		temp->data=atoi(argv[i]);
		temp->next=head;
		head=temp;
	}
head=	rotate_list(head,n);
	print_list(head);
	return 0;
}


