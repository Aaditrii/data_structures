#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
void check_parenthesis(string str){
	stack<char>stack1;
	for(int i=0;i<str.size();i++){
		if(str[i]=='('||str[i]=='['||str[i]=='{')
			stack1.push(str[i]);
		if((str[i]==')'&&stack1.top()=='(')||(str[i]==']'&&stack1.top()=='[')||(str[i]=='}'&&stack1.top()=='{'))
                         stack1.pop();
	}
if(stack1.empty())
cout<<"balanced";
else
	cout<<"unbalanced";
}


int main(int argc,const char* argv[]){
	string str=argv[1];
	check_parenthesis(str);
	return 0;
}
