#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void printList(struct Node* head){
	struct Node* temp=head;
	if(temp->data%2!=0){
		while(head!=NULL){
			printf("%d ",head->data);
			if(head->next==NULL)
				break;
			head=head->next->next;
		}
	}
	else{
		while(head->next!=NULL){
			printf("%d ",head->next->data);
			if(head->next->next==NULL)
				break;
			head=head->next->next;
		}
	}
}
int main(int argc,const char* argv[]){
	struct Node* head=NULL;
	int n=atoi(argv[1]);
	for(int i=argc-1;i>=2;i--){
		struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
		temp->data=atoi(argv[i]);
		temp->next=head;
		head=temp;
	}
	printList(head);
	return 0;
}
