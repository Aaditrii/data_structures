#include<stdio.h>
#include<stdlib.h>
struct Node{
        int data;
        struct Node *next;
};
struct Node* delete_first(struct Node* head){
        if(head==NULL)
                return NULL;
        struct Node* temp;
        temp=head->next;
        head=temp;
        return head;
}
struct Node* delete_last(struct Node* head){
        if(head==NULL)
                return NULL;
        if(head->next==NULL){
                return NULL;
        }
        struct Node* second_last=head;
        while(second_last->next->next!=NULL){
                second_last=second_last->next;
        }
        second_last->next=NULL;
        return head;
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
                struct Node* temp1;
		  temp1=(struct Node*)malloc(sizeof(struct Node*));
                temp1->data=atoi(argv[i]);
                temp1->next=head;
                head=temp1;
        }
        head=delete_first(head);
        print_list(head);
        head=delete_last(head);
        print_list(head);
        return 0;
}


