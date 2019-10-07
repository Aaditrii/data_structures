#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
	char data;
	struct Node* next;
};
	struct Node* push(struct Node* top,char new_element){
		struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
		temp->data=new_element;
		temp->next=top;
		top=temp;
		return top;
	}
	void print_stack(struct Node* top){
		while(top!=NULL){
			printf("%c",top->data);
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
	char a[100];
	strcpy(a,argv[1]);
	struct Node* top=NULL;
	for(int i=strlen(a)-1;i>=0;i--)
		top=push(top,a[i]);
	top=reverse(top);
	print_stack(top);
	return 0;
}
