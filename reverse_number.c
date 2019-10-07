#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
	struct Node* push(struct Node* top,int new_element){
		struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
		temp->data=new_element;
		temp->next=top;
		top=temp;
		return top;
	}
	void print_stack(struct Node* top){
		while(top!=NULL){
			printf("%d",top->data);
			top=top->next;
		}
	}
	struct Node* reverse(struct Node* top){
		struct Node* curr=top;
		struct Node* prev=NULL;
		struct Node* next1;
		while(curr!=NULL){
			next1=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next1;
		}
		top=prev;
		return top;
	}
int main(int argc,const char* argv[]){
	int number=atoi(argv[1]);
	struct Node* top=NULL;
	int k=number,rem=0;
	while(k!=0){
		rem=k%10;
		top=push(top,rem);
		k=k/10;
	}
	top=reverse(top);
	print_stack(top);
	return 0;
}
