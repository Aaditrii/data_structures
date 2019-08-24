#include<iostream>
#include<cstdlib>
using namespace std;
void isPanagram(string st){
	int f=0;
	string s="abcdefghijklmnopqrstuvwxyz";
	for(int i=0;i<26;i++){
		if(st.size()<26)
			break;
		for(int j=0;j<st.size();j++){
			if(st[j]==s[i]){
				f=1;
				break;
			}
			else{
				f=0;
			}
		}
		if(f==0)
			break;

	}
	if(f==0)
		cout<<"0";
	else
		cout<<"1";

}
int main(int argc,const char* argv[]){
	int k=0,k1;
	string str[100];
	k1=atoi(argv[1]);
	for(int i=2;i<argc;i++)
		str[k++]=argv[i];
	for(int i=0;i<k1;i++){
	isPanagram(str[i]);
	}
	return 0;
}

		

