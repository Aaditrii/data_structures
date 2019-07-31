#include<iostream>
#include<cstring>
using namespace std;
int check_rotation(string str1,string str2,int n,int n1){
	if(n!=n1)
		return 0;
	char a[10],b[10];
	strcpy(a,str1.c_str());
	strcpy(b,str2.c_str());
	strcat(a,a);
	char *p=strstr(a,b);
	if(p)
		return 1;
	else
		return 0;
}
int main(){
	string str1,str2;
	int n,n1;
	getline(cin,str1);
	getline(cin,str2);
	n=str1.size();
	n1=str2.size();
	cout<<"to check s2 is the rotation of s1"<<endl;
	int y=check_rotation(str1,str2,n,n1);
	if(y==0)
		cout<<"no";
	else
		cout<<"yes";
	return 0;
}
