#include<iostream>
#include<stack>
using namespace std;
void print_stack(stack<int>s){
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
}
int main(int argc,const char* argv[]){
	stack<int>s;
	for(int i=argc-1;i>=1;i--)
		s.push(atoi(argv[i]));
	print_stack(s);
	return 0;
}


