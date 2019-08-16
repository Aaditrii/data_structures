#include<iostream>
#include<cstdlib>
void swap(int *num1,int *num2){
	int t;
	t=*num1;
	*num1=*num2;
	*num2=t;
}
void bubble_sort(int arr[100],int k){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}
using namespace std;
int main(int argc,const char *argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	bubble_sort(arr,k);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}
