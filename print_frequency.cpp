#include<iostream>
#include<cstdlib>
using namespace std;
void print_characters(string s){
	int count=1;
	for(int i=0;i<s.size()-1;i++){
		count=1;
		if(s[i]!='$'){
		for(int j=i+1;j<s.size();j++){
			if(s[i]==s[j]){
				count++;
				s[j]='$';
			}
		}
		cout<<s[i]<<count<<" ";
		}
	}
}


int main(int argc,const char* argv[]){
	string s=argv[1];
	print_characters(s);
	return 0;
}
