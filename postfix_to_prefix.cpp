#include<iostream>
#include<stack>
using namespace std;
void convert_prefix(string s){
	string str1;
	string str2;
	stack<string>stack1;
	for(int i=0;i<s.size();i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
			string str(1,s[i]);
			stack1.push(str);
		}
		else{
			str1=stack1.top();
			stack1.pop();
			str2=stack1.top();
			stack1.pop();
			stack1.push(s[i]+str2+str1);
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
	convert_prefix(s);
	return 0;
}
