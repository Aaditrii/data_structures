#include<iostream>
#include<cstring>
using namespace std;
void reverse_s(string str,int n){
	char a[100];
	strcpy(a,str.c_str());
	for(int i=n-1;i>=0;i--)
		cout<<a[i];
}
int main(){
	string str;
	int n;
	getline(cin,str);
	n=str.size();
	reverse_s(str,n);
	return 0;
}
