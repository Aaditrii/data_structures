#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void print_list(struct Node* head){
	while(head!=NULL){
		printf("%d",head->data);
		head=head->next;
	}
	printf("\n");
}
struct Node* push_at_beg(struct Node* head,int val){
	struct Node* node_value;
	node_value=(struct Node*)malloc(sizeof(struct Node*));
	node_value->data=val;
	node_value->next=head;
	head=node_value;
	return head;
}
	int main(int argc,const char *argv[]){
	struct Node* head=NULL; //creating an empty list
	for(int i=argc-1;i>=1;i--){
		struct Node* temp;
		temp=(struct Node*)malloc(sizeof(struct Node*));
		temp->data=atoi(argv[i]);
		temp->next=head;
		head=temp;
	}
	print_list(head);
	head=push_at_beg(head,6);
	print_list(head);
	return 0;
}


