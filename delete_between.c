#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void print_list(struct Node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
void delete_between(struct Node* head,int n){
	struct Node* temp=NULL;
	while(head!=NULL){
		if(head->data!=n){
			temp=head;
		}
		else{
		head=head->next;
		break;
		}
		head=head->next;
	}
	temp->next=head;
}
int main(int argc,const char* argv[]){
	struct Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		struct Node* temp;
		temp=(struct Node*)malloc(sizeof(struct Node*));
		temp->data=atoi(argv[i]);
		temp->next=head;
		head=temp;
	}
	delete_between(head,6);
	print_list(head);
	return 0;
}
