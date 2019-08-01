#include<iostream>
#include<cstring>
using namespace std;
int check_rotation(string str1,string str2,int n,int n1){
	char a[20],b[20],temp;
	int f=0;
	strcpy(a,str1.c_str());
	strcpy(b,str2.c_str());
	if(n!=n1)
		return 0;
	for(int i=0;i<n;i++){
		if(strcmp(a,b)==0){
			f=1;
			break;
		}
		else{
			f=0;
			temp=b[n-1];
			for(int j=n-2;j>=0;j--)
				b[j+1]=b[j];
			b[0]=temp;
		}
	}
	if(f==1)
		return 1;
	else
		return 0;
}

int main(){
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	int n=str1.size();
	int n1=str2.size();
	int y=check_rotation(str1,str2,n,n1);
	if(y==0)
		cout<<"no";
	else
		cout<<"yes";
	return 0;
}
