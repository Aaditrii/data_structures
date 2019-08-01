#include<iostream>
#include<cstring>
using namespace std;
void move_uppercase(string str,int n){
	string str1="";
	string str2="";
       string s;
	int k=0,l=0;
	for(int i=0;i<n;i++){
		if(isupper(str[i]))
			str1+=str[i];
		else
			str2+=str[i];
	}
	s=str2+str1;
	cout<<s;

}
int main(){
	string str;
	int n;
	getline(cin,str);
	n=str.size();
	move_uppercase(str,n);
	return 0;
}
