#include<iostream>
#include<stack>
using namespace std;
int get_priority(char a){
	if(a=='-'||a=='+')
		return 1;
	else if(a=='*'||a=='/')
		return 2;
	else if(a=='^')
		return 3;
	else
		return -1;
}	
void convert_prefix(string s){
	stack<char>stack1;
	string s1;
	stack1.push('N');
	for(int i=0;i<s.size();i++){
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
			s1=s1+s[i];
		}
		else if(s[i]=='(')
			stack1.push(s[i]);
		else if(s[i]==')'){
			while(stack1.top()!='N' && stack1.top()!='('){
				s1=s1+stack1.top();
				stack1.pop();
			}
			if(stack1.top()=='(')
				stack1.pop();
		}
		else{
				while((get_priority(s[i])<=get_priority(stack1.top()))&&( stack1.top()!='N')){
					s1=s1+stack1.top();
					stack1.pop();
				}
				stack1.push(s[i]);
		}
	}
	while(stack1.top()!='N'){
		s1=s1+stack1.top();
		stack1.pop();
	}
stack<string>stack2;
string str1;
string str2;
for(int i=0;i<s1.size();i++){
	if((s1[i]>='a'&&s1[i]<='z')||(s1[i]>='A'&&s1[i]<='Z')){
		string str(1,s1[i]);
		stack2.push(str);
	}
	else{
		str1=stack2.top();
		stack2.pop();
		str2=stack2.top();
		stack2.pop();
		stack2.push(s1[i]+str2+str1);
	}
}
while(!(stack2.empty())){
	cout<<stack2.top();
	stack2.pop();
}
}


int main(int argc,const char* argv[]){
	string s;
	s=argv[1];
	convert_prefix("(A+B)*(C+D)");
	return 0;
}
