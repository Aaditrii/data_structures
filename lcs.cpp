#include<iostream>
#include<string>
using namespace std;
int main(){
	string arr1[200],arr2[200],str1,str2;
	int l,k,n,n1,s,max=0,d;
	getline(cin,str1);
	getline(cin,str2);
	n=str1.size();
	n1=str2.size();
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++)
			arr1[k++]=str1.substr(i,j+1);
	}
	for(int i=0;i<n1;i++){
		for(int j=i;j<n1;j++)
			arr2[l++]=str2.substr(i,j+1);
	}
	/*
	for(int i=0;i<k;i++)
		cout<<arr1[i]<<endl;
	cout<<endl;
	for(int i=0;i<l;i++)
		cout<<arr2[i]<<endl;
		*/
	for(int i=0;i<k;i++){
		for(int j=0;j<l;j++){
			if(arr1[i]==arr2[j]){
				s=arr1[i].size();
			}
		}
			if(max<s){
				max=s;
				d=i;
			}
	}
	cout<<arr1[d];

	return 0;
}


