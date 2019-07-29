#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
	char s1[]="geeks";
	char s2[10];
	strcpy(s2,s1);//copy one string to another
	strcat(s2,s1);//concatenation of one string into another
        cout<<s2<<endl;
	int l=strlen(s1);
	cout<<l<<endl;
	if(strcmp(s1,s2)==0)
		cout<<"yes";
	else
		cout<<"no";
	if(strstr(s1,"geeks")!=NULL)
		cout<<"yes"<<endl;
	if(strchr(s1,'e')!=NULL)
		cout<<"yes"<<endl;
	return 0;
}
