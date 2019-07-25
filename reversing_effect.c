#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[10],count,k=0,d;
	count=argc-1;
	for(int i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int count1=0,f=0;
	printf("printing the reverse for a right rotated array\n");
	for(int i=0;i<count;i++)
	{
		for(int j=i+1;j<count;j++)
		{
			if(arr[i]>arr[j])
			{
				f=1;
				break;
			}
			else
			{
				f=0;
			}
		}
		if(f==1)
		{
			count1++;
		}
	}
	d=count1;
	int temp=0;
	for(int j=0;j<d;j++)
	{
		temp=arr[0];
		for(int i=0;i<count;i++)
		{
			arr[i]=arr[i+1];
		}
		arr[count-1]=temp;
	}
	printf("ending the effect of rotation\n");
	for(int i=0;i<count;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}


