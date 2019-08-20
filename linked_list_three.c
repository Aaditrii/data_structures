#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void print_list(struct Node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
void insert_node(struct Node* head,int bef,int after){
	struct Node* new_node;
	new_node=(struct Node*)malloc(sizeof(struct Node*));
	new_node->data=after;
	while(head!=NULL){
		if(head->data==bef){
			new_node->next=head->next;
			break;
		}
		head=head->next;
	}
	head->next=new_node;
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
	insert_node(head,7,8);
	print_list(head);
	return 0;
}
