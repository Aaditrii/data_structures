#include<iostream>
#include<cstring>
using namespace std;
void check_integer(string arr[100], int k){
	string s;
	for(int i = 0;i < k; i++){
		s = arr[i];
		for(int j = 0; j < s.size(); j++){
			if(isdigit(s[j])){
				cout<<s[j];
			}
		}
		cout<<endl;
	}
}
int main(int argc,const char* argv[]){
	string arr[100];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=argv[i];
	check_integer(arr,k);
	return 0;
}
