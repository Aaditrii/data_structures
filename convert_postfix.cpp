#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;
int get_priority(char s){
        if(s=='-'||s=='+')
                return 1;
        else if(s=='*'||s=='/')
                return 2;
        else if(s=='^')
                return 3;
	else 
		return -1;
}
void convert_postfix(string str){
        stack<char>s;
        string s1;
	s.push('N');
	char c;
        for(int i=0;i<str.size();i++){
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
			s1=s1+str[i];
		}
		else if(str[i] == '(')
			s.push(str[i]);
		else if(str[i] == ')'){
			while(s.top()!='('&& s.top()!='N'){
				s1=s1+s.top();
				 s.pop();
			}
			if(s.top()=='(')
				s.pop();
		}
		else{
			while((get_priority(str[i])<=get_priority(s.top())) && s.top()!='N'){
					s1=s1+s.top();
					s.pop();
			}
			s.push(str[i]);
		}
	}
	while(s.top()!='N'){
		s1=s1+s.top();
		s.pop();
	}
	cout<<s1;

}
int main(int argc,const char* argv[]){
	string str;
	str=argv[1];
	convert_postfix(str);
	return 0;
}




