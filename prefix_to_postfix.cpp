#include<iostream>
#include<stack>
using namespace std;
void convert_postfix(string s){
	stack<string>stack1;
	string str1;
	string str2;
	for(int i=s.size()-1;i>=0;i--){
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
			string str(1,s[i]);
			stack1.push(str);
		}
		else{
			str1=stack1.top();
			stack1.pop();
			str2=stack1.top();
			stack1.pop();
			stack1.push(str1+str2+s[i]);
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
	convert_postfix(s);
	return 0;
}

