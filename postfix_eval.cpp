#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
void postfix_eval(string str){
	stack<int>stack1;
	for(int i=0;i<str.size();i++){
		if(isdigit(str[i])){
			stack1.push((str[i]-'0'));
		}
		else{
			int s1=stack1.top();
			stack1.pop();
			int s2=stack1.top();
			stack1.pop();
			switch(str[i]){
				case '+':
					stack1.push(s1+s2);
					break;
				case '-':
					stack1.push(s1-s2);
					break;
				case '*':
					stack1.push(s1*s2);
					break;
				case '/':
					stack1.push(s1/s2);
					break;
			}
		}
	}
	while(!(stack1.empty())){
		cout<<stack1.top();
		stack1.pop();
	}
}

int main(int argc,const char* argv[]){
	string str;
	str=argv[1];
	postfix_eval(str);
	return 0;
}
