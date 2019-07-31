#include<iostream>
#include<cstring>
using namespace std;
void remove_characters(string str1,string str2,int n ,int n1){
	char a[30],b[30];
	int f=0;
	strcpy(a,str1.c_str());
	strcpy(b,str2.c_str());
	for(int i=0;i<n;i++){
		for(int j=0;j<n1;j++){
			if(a[i]!=b[j])
				f=1;
			else{
				f=0;
				break;
			}
		}
		if(f==1)
			cout<<a[i];
		else
			f=0;
	}
}
int main(){
	string str1,str2;
	int n,n1;
	getline(cin,str1);
	getline(cin,str2);
	n=str1.size();
	n1=str2.size();
	remove_characters(str1,str2,n,n1);
	return 0;
}

