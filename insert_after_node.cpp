#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next[2];
};
void insert_after_node(Node* head,int after,int data1){
	Node* temp1,*temp2;
	while(head!=NULL){
		if(head->data==after){
			Node* new_node=new Node();
			new_node->data=data1;
			temp1=head;
			temp2=head->next[0];
			new_node->next[0]=temp2;
			new_node->next[1]=temp1;
			temp1->next[0]=new_node;
			temp2->next[1]=new_node;
			break;
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
	int after=atoi(argv[argc-2]);
	int data1=atoi(argv[argc-1]);
	insert_after_node(head,after,data1);
	print_list(head);
	return 0;
}


