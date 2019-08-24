#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int d,Node* next){
			data=d;
			this->next=next;
		}
};
class Mylinkedlist{
	private:
		Node* head;
	public:
		Mylinkedlist(Node* head){
			this->head=head;
		}
		void reverse();
		void print();
};
void Mylinkedlist::reverse(){
	Node* current=head;
	Node* prev=NULL;
	Node* next1;
	while(current!=NULL){
		next1=current->next;
		current->next=prev;
		prev=current;
		current=next1;
	}
	head=prev;
}
void Mylinkedlist::print(){
	while(head!=NULL){
		cout<<head->data;
		head=head->next;
	}
}
int main(int argc,const char* argv[]){
	Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		Node* temp=new Node(atoi(argv[i]),head);
		head=temp;
	}
	Mylinkedlist *l=new Mylinkedlist(head);
        l->reverse();
	l->print();
	return 0;
}
	
