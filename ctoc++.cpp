#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char *a="hello";
	cout<<"this is a C-string"<<a<<endl;
	string s(a);
	cout<<"this is a C++ string"<<s<<endl;
	char str[]="hello world";
	string str1(str);
	cout<<str1<<endl;
	return 0;
}
