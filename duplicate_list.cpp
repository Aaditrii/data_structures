#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
void remove_duplicates(Node* head){
	Node* next1;
	while(head->next!=NULL){
		if(head->data==head->next->data){
			next1=head->next->next;
			free(head->next);
			head->next=next1;
		}
		else
			head=head->next;
	}
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
	remove_duplicates(head);
	print_list(head);
	return 0;
}


