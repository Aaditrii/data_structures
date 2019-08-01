#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[]){
	int k=0,arr[20],temp=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	int d=k/2;
	int n=k-d;
	for(int i=0;i<n;i++)
	{
		temp=arr[k-1];
		for(int j=k-2;j>=0;j--)
			arr[j+1]=arr[j];
		arr[0]=temp;
	}
	for(int i=0;i<k;i++)
		printf("%d\t",arr[i]);
	return 0;
}
