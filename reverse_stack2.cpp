#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
class MyStack{
	Node* top=NULL;
	public:
	MyStack(){
	}
	void push(int new_element){
		Node* temp=new Node();
		temp->data=new_element;
		temp->next=top;
		top=temp;
	}
	void print_stack(){
		while(top!=NULL){
			cout<<top->data<<" ";
			top=top->next;
		}
	}
	void reverse(){
		Node* curr=top;
		Node* prev=NULL;
		Node* next1;
		while(curr!=NULL){
			next1=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next1;
		}
		top=prev;
	}
};

int main(int argc,const char* argv[]){
	MyStack *stack=new MyStack();
	for(int i=argc-1;i>=1;i--)
		stack->push(atoi(argv[i]));
	stack->reverse();
	stack->print_stack();
	return 0;
}
