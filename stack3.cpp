#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
	string data;
	Node* next;
};
class MyStack{
	Node* top=NULL;
	public:
	MyStack(){
	}
	bool push(string new_element){
		Node* temp=new Node();
		temp->data=new_element;
		temp->next=top;
		top=temp;
		return true;
	}
	string pop(){
		if(top==NULL)
			return "$";
		string x=top->data;
		top=top->next;
		return x;
	}
         string peek(){
		string x=top->data;
		return x;
	}
	bool isEmpty(){
		if(top==NULL)
			return true;
		return false;
	}
	void print_stack(){
		while(top!=NULL){
			cout<<top->data<<" ";
			top=top->next;
		}
	}
};
int main(int argc,const char* argv[]){
	MyStack *stack = new MyStack();
	for(int i=argc-1;i>=1;i--)
		stack->push(argv[i]);
	string x=stack->pop();
	cout<<x<<" "<<endl;
      stack->push("f");
	stack->print_stack();
	return 0;
}

	
