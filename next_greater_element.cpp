#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
void next_greater(int arr[100],int k){
	stack<int>stack1;
	int j,f=0;
	stack1.push(arr[0]);
	for(int i=1;i<k;i++){
		if(stack1.empty()){
			stack1.push(arr[i]);
		}
		j=i;
		while(j<k){
			f=0;
			if(stack1.top()<arr[j]&&stack1.empty()==false){
				cout<<arr[j]<<" ";
				stack1.pop();
				f=1;
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
		cout<<"-1";
		stack1.pop();
	}
}

int main(int argc,const char* argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	next_greater(arr,k);
	return 0;
}

