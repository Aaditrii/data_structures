#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
		int data;
		Node* next[2];
};
int count_triplets(Node* head,int x){
	int count=0;
	Node *ptr1,*ptr2,*ptr3;
	for(ptr1=head;ptr1!=NULL;ptr1=ptr1->next[0]){
		for(ptr2=ptr1->next[0];ptr2!=NULL;ptr2=ptr2->next[0]){
			for(ptr3=ptr2->next[0];ptr3!=NULL;ptr3=ptr3->next[0]){
				if(ptr1->data+ptr2->data+ptr3->data==x)
					count++;
			}
		}
	}
	return count;
}
int main(int argc,const char* argv[]){
	Node* head=NULL;
	Node* temp;
	for(int i=argc-2;i>=1;i--){
		temp=head;
		Node* newnode=new Node();
		newnode->data=atoi(argv[i]);
		newnode->next[0]=head;
		newnode->next[1]=NULL;
		head=newnode;
		if(temp!=NULL)
			temp->next[1]=newnode;
	}
	int x=atoi(argv[argc-1]);
	int count=count_triplets(head,x);
	cout<<count;
	return 0;
}

