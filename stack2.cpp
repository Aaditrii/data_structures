#include<iostream>
#include<cstring>

#define CAPACITY 1000

using namespace std;

class MyStack{
	int top;

	public:
       		string arr[CAPACITY];

		MyStack() {
			top = -1;
		}

		bool push(string new_element) {
			if(top >= CAPACITY-1){
				cout<<"stack overflow";
				return false;
			}
			arr[++top]=new_element;
			return true;
		}
	
		string pop() {
			if(top == -1)
				return "$";
			string stack_top_ele = arr[top];
			top=top-1;
			return stack_top_ele;
		}
	
		string peek() {
			if(top == -1)
				return "$";
			return arr[top];
		}
	
		bool is_empty(){
			if(top == -1)
				return true;
			return false;
		}
	
		void print_stack(){
			while(top != -1){
				cout << arr[top]<<" ";
				top=top-1;
			}
		}
};
int main(int argc,const char* argv[]){
	MyStack *stack=new MyStack();
	for(int i=argc-1;i>=1;i--)
		stack->push(argv[i]);
	stack->print_stack();
	return 0;
}
