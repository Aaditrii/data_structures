#include<iostream>
#include<cstdlib>
using namespace std;
bool isVowel(char c){
	return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}
void reverse_vowels(string s){
	string v;
	int j=0;
	for(int i=0;i<s.size();i++){
		if(isVowel(s[i]))
			v[j++]=s[i];
	}
	for(int i=0;i<s.size();i++){
		if(isVowel(s[i]))
			s[i]=v[--j];
	}
	cout<<s;
}
int main(int argc,const char* argv[]){
	string s;
	s=argv[1];
	reverse_vowels(s);
	return 0;
}

