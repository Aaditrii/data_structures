#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void print_random(int n){

	char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	string res="";
	for(int i=0;i<n;i++){
		res=res+a[rand()%26];
	}
	cout<<res;
}
int main(){
	srand(time(NULL));
	int n;
	cin>>n;
	print_random(n);
	return 0;
}
