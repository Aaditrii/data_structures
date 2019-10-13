#include<iostream>
#include<cstdlib>
using namespace std;
int count_binary_trees(int length){
	int a=2*length;
	int fact1=1;
	for(int i=1;i<=a;i++)
		fact1=fact1*i;
	int b=length+1;
	int fact2=1,fact3=1;
	for(int i=1;i<=b;i++)
		fact2=fact2*i;
	for(int i=1;i<=length;i++)
		fact3=fact3*i;
	fact3=fact3*fact2;
	int count=fact1/fact3;
	return count;
}
int main(int argc,const char* argv[]){
	int length;
	cout<<"Enter the length of given sequence of pre-order"<<endl;
	length=atoi(argv[1]);
	int number=count_binary_trees(length);
	cout<<number;
	return 0;
}
