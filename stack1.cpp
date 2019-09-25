#include<iostream>
#include<cstring>

#define CAPACITY 1000

using namespace std;

class MyStack{
	int top;

	public:
       		int arr[CAPACITY];

		MyStack() {
			top = -1;
		}

		bool push(int new_element) {
			if(top >= CAPACITY-1){
				cout<<"stack overflow";
				return false;
			}
			arr[++top]=new_element;
			return true;
		}
	
		int pop() {
			if(top == -1)
				return '0';
			int stack_top_ele = arr[top];
			top=top-1;
			return stack_top_ele;
		}
	
		int peek() {
			if(top == -1)
				return 0;
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

int main(int argc, char* argv[]){
	MyStack *stack = new MyStack();
	for(int i=argc-1;i>=1;i--)
		stack->push(atoi(argv[i]));
	int pop_element=stack->pop();
	cout<<pop_element<<endl;
	int top=stack->peek();
	cout<<top<<endl;
	stack->print_stack();
	

	return 0;
}


			

