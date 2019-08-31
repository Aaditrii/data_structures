#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void push(struct Node** head_ref,int new_data){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
	temp->data=new_data;
	temp->next=*head_ref;
	*head_ref=temp;
}
void traverse(struct Node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
int main(int argc,const char* argv[]){
	struct Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		push(&head,atoi(argv[i]));
	}
	traverse(head);
	return 0;
}

