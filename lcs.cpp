#include<iostream>
using namespace std;
int maximum(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int longest_substring(string str1,string str2,int l1,int l2){
	int result=0;
	int lcs[l1+1][l2+1];
	for(int i=0;i<=l1;i++){
		for(int j=0;j<=l2;j++){
			if(i==0||j==0)
				lcs[i][j]=0;
			else if(str1[i-1]==str2[j-1]){
				lcs[i][j]=lcs[i-1][j-1]+1;
				result=maximum(result,lcs[i][j]);
			}
			else
				lcs[i][j]=0;
		}
	}
	return result;
}
int main(int argc,const char* argv[]){
	string str1,str2;
	int l1,l2;
	str1=argv[1];
	str2=argv[2];
	l1=str1.size();
	l2=str2.size();
	int max1=longest_substring(str1,str2,l1,l2);
	cout<<max1;
	return 0;
}
