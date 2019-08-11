#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[10],k=0;
	int count=argc-2;
	for(int i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int d=atoi(argv[argc-1]);
	int temp[10],l=0;
	for(int i=count-d;i<count;i++)
	{
		temp[l]=arr[i];
		l++;
	}
	for(int i=count-d-1;i>=0;i--)
	{
		arr[i+d]=arr[i];
	}
	for(int i=0;i<d;i++)
	{
		arr[i]=temp[i];
	}
	printf("So the pattern of elements by %d rotations is:\n",d);
	for(int i=0;i<count;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}


