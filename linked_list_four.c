#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
int linear_search(struct Node* head,int n){
	int f=0;
	while(head!=NULL){
		if(head->data==n){
			f=1;
			break;
		}
		head=head->next;
	}
	return f;
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
	int f=linear_search(head,4);
	if(f==1)
		printf("the element is present in linked list");
	else
		printf("the element is not present in the linked list");
	return 0;
}
