#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
void intersect(Node* head1,Node* head2){
	int arr[100],k=0;
	Node* head3=head2;
	while(head1!=NULL){
		while(head2!=NULL){
			if(head1->data==head2->data){
				arr[k++]=head1->data;
			}
			head2=head2->next;
		}
		head1=head1->next;
		head2=head3;
	}
	Node* head4=NULL;
	for(int i=k-1;i>=0;i--){
		Node* temp=new Node();
		temp->data=arr[i];
		temp->next=head4;
		head4=temp;
	}
	while(head4!=NULL){
		cout<<head4->data<<" ";
		head4=head4->next;
	}
}
int main(int argc,const char* argv[]){
	Node* head1=NULL;
	Node* head2=NULL;
	int n1=atoi(argv[1]);
	int n2=atoi(argv[2]);
	for(int i=n1+2;i>=3;i--){
		Node* temp=new Node();
		temp->data=atoi(argv[i]);
		temp->next=head1;
		head1=temp;
	}
	for(int i=argc-1;i>=n1+3;i--){
		Node* temp=new Node();
		temp->data=atoi(argv[i]);
		temp->next=head2;
		head2=temp;
	}
	intersect(head1,head2);
	return 0;
}
