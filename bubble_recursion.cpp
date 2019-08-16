#include<iostream>
#include<cstdlib>
using namespace std;
void bubble_recursion(int arr[100],int n,int i){
	int temp=0;
	if(i==n-1)
		return;
	for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	bubble_recursion(arr,n,i+1);
}
int main(int argc,const char *argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	bubble_recursion(arr,k,0);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}
