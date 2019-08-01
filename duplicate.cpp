#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void remove_duplicates(string str,int n){
	char a[30];
	strcpy(a,str.c_str());
	for(int i=0;i<n;i++){
		if(a[i]!='$'){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j])
					a[j]='$';
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!='$')
			cout<<a[i];
	}
}
int main(){
	string str;
	int n;
	getline(cin,str);
	n=str.size();
	remove_duplicates(str,n);
	return 0;
}
