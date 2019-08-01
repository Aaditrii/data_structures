#include<iostream>
#include<cstring>
using namespace std;
void insert_string(string str1,string str2,int n,int n1,int d){
char a[30],b[30],c[30];
int k=0;
strcpy(a,str1.c_str());
strcpy(b,str2.c_str());
strcpy(c,a);
cout<<n;
for(int i=d;i<n+n1;i++){
	a[i+n1]=c[i];
	if(k<n1){
		a[i]=b[k++];
	}
}
int l=strlen(a);
cout<<l;
cout<<a;
}
int main(){
	string str1,str2;
	int d,n,n1;
	getline(cin,str1);
	getline(cin,str2);
	n=str1.size();
	n1=str2.size();
	cin>>d;
	insert_string(str1,str2,n,n1,d);
	return 0;
}
