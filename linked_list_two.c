#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void push_back(struct Node* head,int new_val){
	struct Node* new_node;
	new_node=(struct Node*)malloc(sizeof(struct Node*));
	new_node->data=new_val;
	new_node->next=NULL;
	struct Node* n=NULL;
	while(head!=NULL){
		n=head;
		head=head->next;
	}
	n->next=new_node;
}
void print_list(struct Node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
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
	push_back(head,8);
	print_list(head);
	return 0;
}

