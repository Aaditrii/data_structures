#include<stdio.h>
#include<stdlib.h>
int find_minimum(int arr[],int low,int high)
{
	if(low>high)
		return arr[0];
	if(low==high)
		return arr[high];
	int mid=low+(high-low)/2;
	if(mid>low && arr[mid-1]>arr[mid])
		return arr[mid];
	if(mid<high && arr[mid+1]<arr[mid])
		return arr[mid+1];
	if(arr[mid]>arr[high])
		return find_minimum(arr,mid+1,high);
	return find_minimum(arr,low,mid-1);
}
int main(int argc,const char *argv[])
{
	int arr[20],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	int min=find_minimum(arr,0,k-1);
	printf("Minimum is %d",min);
	return 0;
}
