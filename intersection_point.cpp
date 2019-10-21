#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
int get_intersection_node(Node* head1,Node* head2,int diff){
	Node* current1=head1;
	Node* current2=head2;
	for(int i=0;i<diff;i++){
		if(current1==NULL)
			return -1;
		current1=current1->next;
	}
	while(current1!=NULL&&current2!=NULL){
		if(current1->data==current2->data)
			return current1->data;
		current1=current1->next;
		current2=current2->next;
	}
	return -1;
}
int get_count(Node* head){
	Node* current=head;
	int count=0;
	while(current!=NULL){
		count++;
		current=current->next;
	}
	return count;
}
int get_intersection(Node* head1,Node* head2){
	int c1=get_count(head1);
	int c2=get_count(head2);
	if(c1>c2){
		int d=c1-c2;
		return get_intersection_node(head1,head2,d);
	}
	else{
		int d=c2-c1;
		return get_intersection_node(head2,head1,d);
	}
}
int main(int argc,const char* argv[]){
	Node* head1=new Node();
	head1->data=3;

	Node* head2=new Node();
	head2->data=10;

	Node* newnode;
	newnode=new Node();
	newnode->data=6;
	head1->next=newnode;

	newnode=new Node();
	newnode->data=9;
	head1->next->next=newnode;

	newnode=new Node();
	newnode->data=15;
	head2->next=newnode;
	head1->next->next->next=newnode;

	newnode=new Node();
	newnode->data=30;
	head2->next->next=newnode;
	head2->next->next->next=NULL;

	int node=get_intersection(head1,head2);
	cout<<"the intersection point of two linked lists is "<<node<<endl;
	return 0;
}
