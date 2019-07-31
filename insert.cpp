#include<iostream>
#include<cstring>
using namespace std;
void insert_string(string str1,string str2,int n,int n1,int d){
	char a[30],b[30],c[30],d1[30];
	int k=0,l=0;
	strcpy(a,str1.c_str());
	strcpy(b,str2.c_str());
	n=n+n1;
	for(int i=0;i<n;i++){
		if(i<d)
			c[l++]=a[i];
		else
			d1[k++]=a[i];
	}
	strcat(c,b);
	strcat(c,d1);
	cout<<c;
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
