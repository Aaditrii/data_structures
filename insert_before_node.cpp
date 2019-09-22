#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next[2];
};
Node* insert_before_node(Node* head,int before,int data1){
	Node* temp1,*temp2;
	Node* head1=head;
	while(head!=NULL){
		if(head->data==before){
			Node* new_node=new Node();
			new_node->data=data1;
			temp1=head;
			temp2=head->next[1];
			new_node->next[0]=temp1;
			new_node->next[1]=temp2;
			if(head->next[1]==NULL){
				head->next[1]=new_node;
				head=new_node;
				return head;
			}
			temp2->next[0]=new_node;
			temp1->next[1]=new_node;
			return head1;
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
	Node* head=NULL;
	for(int i=argc-3;i>=1;i--){
		Node* temp=head;
		Node* new_node=new Node();
		new_node->data=atoi(argv[i]);
		new_node->next[0]=head;
		new_node->next[1]=NULL;
		head=new_node;
		if(temp!=NULL)
			temp->next[1]=new_node;
	}
	int before=atoi(argv[argc-2]);
	int data1=atoi(argv[argc-1]);
	head=insert_before_node(head,before,data1);
	print_list(head);
	return 0;
}
