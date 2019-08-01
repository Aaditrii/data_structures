#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="hello";
	string s2="world";
	string s3,s4;
	int len;
	s3=s1;
	cout<<s3<<endl;
	s4=s1+s2;
	cout<<s4<<endl;
	len=s4.size();
	cout<<len<<endl;
	return 0;
}

