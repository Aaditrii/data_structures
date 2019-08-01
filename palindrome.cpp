#include<iostream>
using namespace std;
int check_palindrome(string str,int n){
	int n1=n,f=0;
	for(int i=0;i<n/2;i++){
		if(str[i]==str[n1-1]){
			n1--;
			f=1;
		}
		else{
			f=0;
			break;
		}
	}
	if(f==1)
		return 1;
	else
		return 0;
}

int main(){
	int n;
	string str;
	cin>>str;
	n=str.size();
	int y=check_palindrome(str,n);
	if(y==1)
		cout<<"yes,given string is a palindrome"<<endl;
	else
		cout<<"no,given string is not a palindrome"<<endl;
	return 0;
}
