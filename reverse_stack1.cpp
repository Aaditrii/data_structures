#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
stack<int>stack2;
void insert_at_bottom(int x){
	stack2.push(x);
}
void reverse_stack(stack<int>stack1){
	if(stack1.size()<=0)
		return;
	int x=stack1.top();
	stack1.pop();
	insert_at_bottom(x);
	reverse_stack(stack1);
}
void print_stack(stack<int>stack2){
	while(!(stack2.empty())){
		cout<<stack2.top()<<" ";
		stack2.pop();
	}
}
int main(int argc,const char* argv[]){
	stack<int>stack1;
	for(int i=argc-1;i>=1;i--)
		stack1.push(atoi(argv[i]));
        cout<<"after reverse"<<endl;
	reverse_stack(stack1);
	print_stack(stack2);
	return 0;
}

