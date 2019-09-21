#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
void remove_duplicates(Node* head,int n){
	Node* head1=head;
	Node* temp,*next1;
	for(int i=0;i<n-1;i++){
		while(head1->next!=NULL){
			temp=head1;
			if(head->data==head1->next->data){
				next1=head1->next->next;
				free(head1->next);
				temp->next=next1;
			}
			head1=head1->next;
		}
		head=head->next;
		head1=head;
	}
}
void print_list(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main(int argc,const char* argv[]){
	Node* head=NULL;
	int n=atoi(argv[1]);
	for(int i=argc-1;i>=2;i--){
		Node* temp=new Node();
		temp->data=atoi(argv[i]);
		temp->next=head;
		head=temp;
	}
	remove_duplicates(head,n);
	print_list(head);
	return 0;
}

