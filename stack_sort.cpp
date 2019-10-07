#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
stack<int>stack2;
	void sort(stack<int>stack1){
		int temp,temp1;
		while(!(stack1.empty())){
			temp=stack1.top();
			stack1.pop();
			while(!(stack2.empty())&&stack2.top()>temp){
				temp1=stack2.top();
				stack2.pop();
				stack1.push(temp1);
			}
			stack2.push(temp);
		}
	}
void print_stack(){
	while(!(stack2.empty())){
		cout<<stack2.top()<<" ";
		stack2.pop();
	}
}
int main(int argc,const char* argv[]){
	stack<int>stack1;
	for(int i=1;i<argc;i++)
		stack1.push(atoi(argv[i]));
	sort(stack1);
	print_stack();
	return 0;
}
