#include<iostream>
#include<string>
using namespace std;
void swap(string s1,string s2){
cout<<"strings before swapping"<<endl<<s1<<endl<<s2<<endl;
	string temp;
	temp=s1;
	s1=s2;
	s2=temp;
	cout<<"strings after swapping"<<endl<<s1<<endl<<s2<<endl;
}
int main(){
	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	swap(s1,s2);
	return 0;
}
