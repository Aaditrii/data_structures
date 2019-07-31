#include<iostream>
#include<cstring>
using namespace std;
int find_maximum_occurence(string str1,int n){
	int count[20],k=0;
	char a[20],b[20];
	strcpy(a,str1.c_str());
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]==a[j]){
				count[i]++;
				b[k++]=a[i];
			}
		}
	}
	int max=0,b1;
	for(int i=0;i<n;i++){
		if(max<count[i]){
			max=count[i];
			b1=i;
		}
	}
	return b[b1];
}

int main(){
	string str1;
	getline(cin,str1);
	int n=str1.size();
	char a=find_maximum_occurence(str1,n);
	cout<<a<<endl;
	return 0;
}
