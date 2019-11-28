#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
void alternate_split(Node* head){
	int arr1[100],arr2[100];
	int b=0;
	int l = 0,k = 0;
	Node* head1 = NULL;
	Node* head2 = NULL;
	while(head != NULL){
		if(b == 0){
			arr1[k++]=head->data;
			b=1;
		}
		else{
			arr2[l++]=head->data;
			b=0;
		}
		head = head->next;
	}
	while(k > 0){
		Node* temp = new Node();
		temp->data = arr1[--k];
		temp->next = head1;
		head1 = temp;
	}
	while(l > 0){
		Node* temp = new Node();
		temp->data = arr2[--l];
		temp->next = head2;
		head2 = temp;
	}
	while(head1 != NULL){
		cout<<head1->data<<" ";
		head1 = head1->next;
	}
	cout<<endl;
	while(head2 != NULL){
		cout<<head2->data<<" ";
		head2 = head2->next;
	}
}


int main(int argc,const char* argv[]){
	Node* head = NULL;
	for(int i=argc-1;i >= 1; i--){
		Node* temp = new Node();
		temp->data = atoi(argv[i]);
		temp->next = head;
		head = temp;
	}
	alternate_split(head);
	return 0;
}
