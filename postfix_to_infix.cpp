#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;
void convert_infix(string s){
	string s1;
	string s2;
	stack<string>stack1;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'){
			string str(1,s[i]);
			stack1.push(str);
		}
		else
		{
			s1=stack1.top();
			stack1.pop();
			s2=stack1.top();
			stack1.pop();
			stack1.push("("+s2+s[i]+s1+")");
		}
	}
	while(!(stack1.empty())){
		cout<<stack1.top();
		stack1.pop();
	}
}

int main(int argc,const char* argv[]){
	string s;
	s=argv[1];
	convert_infix(s);
	return 0;
}

