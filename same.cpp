#include<iostream>
using namespace std;
int check_same(string str1,string str2){
	int n,n1,f=0;
	n=str1.size();
	n1=str2.size();
	if(n!=n1)
	return 0;
	else{
		for(int i=0;i<n;i++){
			if(str1[i]==str2[i])
				f=1;
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
}
int main(){
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	int y=check_same(str1,str2);
	if(y==1)
		cout<<"yes,"+str1+","+str2+" are same";
	else
		cout<<"no,"+str1+","+str2+" are not same";
	return 0;
}
