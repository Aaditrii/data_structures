#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
int count_greater(int index,int arr[],int len){
	stack<int>stack1;
	int count=0,f=0;
	stack1.push(arr[index]);
	for(int j=index+1;j<len;j++){
		if(stack1.top()<arr[j]){
			count++;
			f=1;
			stack1.push(arr[j]);
		}
	}
	if(f==0)
		return 0;
	else
		return count;
}
int main(int argc,const char* argv[]){
	int arr[100],q,a[10],k=0,l=0,n;
	n=atoi(argv[1]);
	for(int i=2;i<n+2;i++)
		arr[k++]=atoi(argv[i]);
	 q=atoi(argv[n+2]);
	for(int i=n+3;i<argc;i++){
		a[l++]=atoi(argv[i]);
	}
	for(int i=0;i<l;i++){
		int count=count_greater(a[i],arr,k);
		cout<<count<<endl;
	}
	return 0;
}


