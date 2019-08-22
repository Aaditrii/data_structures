#include<stdio.h>
#include<stdlib.h>
void printArray(int arr[100],int size);
void swap(int arr[],int fi,int si,int d);
void leftrotate(int arr[100],int d,int n){
	if(d==0||d==n)
		return;
	if(n-d==d){
		swap(arr,0,n-d,d);
		return;
	}
	if(d<n-d){
		swap(arr,0,n-d,d);
		leftrotate(arr,d,n-d);
	}
	else{
		swap(arr,0,d,n-d);
		leftrotate(arr+n-d,2*d-n,d);
	}
}
void printArray(int arr[100],int size){
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
}
void swap(int arr[100],int fi,int si,int d){
	int i,temp;
	for(i=0;i<d;i++){
		temp=arr[fi+i];
		arr[fi+i]=arr[si+i];
		arr[si+i]=temp;
	}
}
int main(int argc,const char *argv[]){
	int k=0,arr[100];
	for(int i=1;i<argc-1;i++){
		arr[k++]=atoi(argv[i]);
	}
	int d=atoi(argv[argc-1]);
	leftrotate(arr,d,k);
	printArray(arr,k);
	return 0;
}
