#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
void greater_frequency(int arr[100],int k,int freq[100]){
	stack<int>stack1;
	int f=0,j;
	stack1.push(arr[0]);
	for(int i=1;i<k;i++){
		if(stack1.empty()){
			stack1.push(arr[i]);
		}
		 j=i;
		while(j<k){
			f=0;
			if(freq[stack1.top()]<freq[arr[j]]&&stack1.empty()==false){
				f=1;
				cout<<arr[j]<<" ";
				stack1.pop();
				break;
			}
			j++;
		}
		if(f==0){
			cout<<"-1"<<" ";
			stack1.pop();
		}
		stack1.push(arr[i]);
	}
	while(!(stack1.empty())){
		cout<<"-1"<<" ";
		stack1.pop();
	}

}


int main(int argc,const char* argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	int freq[100]={0};
	for(int i=0;i<k;i++)
		freq[arr[i]]++;
	greater_frequency(arr,k,freq);
	return 0;
}
