#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
int m[8][8]={{0,0,1,0},{0,0,1,0},{0,0,0,0},{0,0,1,0}};
bool knows(int a,int b){
	return m[a][b];
}
int find_celebrity(int arr[100]){
	stack<int>stack1;
	for(int i=0;i<4;i++)
		stack1.push(i);
	int a1=stack1.top();
	stack1.pop();
	int b1=stack1.top();
	stack1.pop();
	while(stack1.size()>1){
		if(knows(a1,b1)){
			a1=stack1.top();
			stack1.pop();
		}
		else{
			b1=stack1.top();
			stack1.pop();
		}
	}
	int c=stack1.top();
	stack1.pop();
	if(knows(c,a1)){
		c=a1;
	}
	if(knows(c,b1)){
		c=b1;
	}
	for(int i=0;i<4;i++){
		if((i!=c)&&(knows(c,i)||!knows(i,c)))
			return -1;
	}
	return c;
}
int main(int argc,const char* argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	int c=find_celebrity(arr);
	if(c==-1)
		cout<<"not found";
	else
		cout<<c;
	return 0;
}

