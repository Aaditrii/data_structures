#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void find_max_min(struct Node* head){
	int max = 0,min = 999;
	struct Node* head1 = head;
	while(head != NULL){
		if(head->data > max){
			max = head->data;
		}
		head=head->next;
	}
	while(head1 != NULL){
		if(head1->data < min){
			min = head1->data;
		}
		head1=head1->next;
	}
	printf("%d %d",max,min);
}
void print_list(struct Node* head){
	while(head != NULL){
		printf("%d ",head->data);
		head = head->next;
	}
	printf("\n");
}
int main(int argc,const char* argv[]){
	struct Node* head = NULL;
	for(int i=1;i<argc;i++){
		struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
		temp->data = atoi(argv[i]);
		temp->next = head;
		head = temp;
	}
	print_list(head);
	find_max_min(head);
	return 0;
}

