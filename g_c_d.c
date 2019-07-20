#include<stdio.h>
#include<stdlib.h>
int g_c_d(int arr[],int count)
{
	int max=0;
	int max1=0;
	int f=0;
	for(int i=0;i<count;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	for(int i=1;i<max;i++)
	{
		for(int j=0;j<count;j++)
		{
			if(arr[j]%i==0)
			{
				f=1;
			}
			else
			{
				f=0;
				break;
			}
		}
		if(f==1)
		{
		if(max1<i)
		{
			max1=i;
		}
		}
	}
	return max1;
}
int main(int argc,const char *argv[])
{
	int arr[10],k=0;
	int count=argc-1;
	int max=0;
	for(int i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;

	}
	int gcd=g_c_d(arr,count);
	printf("the gcd is %d",gcd);
	return 0;
}
