#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
		int data;
		Node* next[2];
};
class MyStack{
	Node* top=NULL;
	public:
	MyStack(){
	};
	void push(int new_element){
		Node* temp=top;
		Node* new_node=new Node();
		new_node->data=new_element;
		new_node->next[0]=top;
		new_node->next[1]=NULL;
		top=new_node;
		if(temp!=NULL)
			temp->next[1]=new_node;
	}
	void print_stack(){
		while(top!=NULL){
			cout<<top->data<<" ";
			top=top->next[0];
		}
	}
	void delete_middle(){
		Node* temp=top;
		Node* temp1=top;
		int count=0,middle,l,count1=0;
		while(temp!=NULL){
			temp=temp->next[0];
			count++;
		}
		l=count/2;
		while(temp1!=NULL){
			if(count1==l){
				middle=temp1->data;
				break;
			}
			else{
				count1++;
				temp1=temp1->next[0];
			}
		}
	Node* temp2;
	Node* top1=top;
		while(top1!=NULL){
			temp2=top1->next[0];
			if(temp2->data==middle){
				top1->next[0]=temp2->next[0];
				temp2->next[0]->next[1]=top1;
				break;
			}
			else
				top1=top1->next[0];
		}
	}
};

int main(int argc,const char* argv[]){
	MyStack *stack1=new MyStack();
	for(int i=argc-1;i>=1;i--)
		stack1->push(atoi(argv[i]));
	stack1->delete_middle();
	stack1->print_stack();
	return 0;
}
