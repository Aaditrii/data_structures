#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
void count_cases(string a){
	int count1=0,count2=0,count3=0;
	for(int i=0;i<a.size();i++){
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
			count1++;
		if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
			count2++;
		if(a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^'||a[i]=='%'||a[i]=='&')
			count3++;
	}
	cout<<count1<<" ";
	cout<<count2<<" ";
	cout<<count3;
}
	
int main(int argc,const char* argv[]){
	string a;
	a=argv[1];
	count_cases(a);
	return 0;
}
