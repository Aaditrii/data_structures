#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int low,int high,int d)
{
	if(low>high)
		return -1;
	int mid=low+(high-low)/2;
	if(arr[mid]==d)
		return mid;
	if(arr[low]<=arr[mid]){
		if(d>=arr[low]&&d<=arr[mid])
			return binary_search(arr,low,mid-1,d);
		return binary_search(arr,mid+1,high,d);
	}
	if(d>=arr[mid+1]&&d<=arr[high])
		return binary_search(arr,mid+1,high,d);
	return binary_search(arr,low,mid-1,d);
}
int main(int argc,const char *argv[])
{
	int arr[10],k=0,count;
	count=argc-2;
	for(int i=1;i<argc-1;i++){
		arr[k]=atoi(argv[i]);
		k++;
	}
	int d=atoi(argv[argc-1]);
	int index=binary_search(arr,0,count-1,d);
	if(index==-1)
		printf("not found");
	else
		printf("index is %d",index);
	return 0;
}
