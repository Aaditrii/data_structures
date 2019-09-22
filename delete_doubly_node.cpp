#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next[2];
};
Node* delete_node(Node* head,int data1){
	Node *temp,*next1;
	Node* head1=head;
	while(head!=NULL){
		if(head->data==data1){
			if(head->next[1]==NULL){
				temp=head->next[0];
				free(head);
				temp->next[1]=NULL;
				head=temp;
				return head;
			}
			else if(head->next[0]==NULL){
				next1=head->next[1];
				free(head);
				next1->next[0]=NULL;
				return head1;
			}
			else{
				next1=head->next[0];
				temp=head->next[1];
				free(head);
				temp->next[0]=next1;
				next1->next[1]=temp;
				return head1;
			}
		}
		else
			head=head->next[0];
	}

}
void print_list(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next[0];
	}
}
int main(int argc,const char* argv[]){
	Node *head=NULL;
	for(int i=argc-2;i>=1;i--){
		Node* temp=head;
		Node* new_node=new Node();
		new_node->data=atoi(argv[i]);
		new_node->next[0]=head;
		new_node->next[1]=NULL;
		head=new_node;
		if(temp!=NULL)
			temp->next[1]=new_node;
	}
	int data1=atoi(argv[argc-1]);
	head=delete_node(head,data1);
	print_list(head);
	return 0;
}
