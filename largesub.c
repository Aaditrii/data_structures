#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int n,l,arr[10],arr1[10];
	n=argc-1;
	l=0;
	int sum=0,max=0;
	for(int i=1;i<argc;i++)
	{
		arr[l]=atoi(argv[i]);
		l++;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum=0;
			for(int k=i;k<j+1;k++)
			{
				sum=sum+arr[k];
				continue;
			}
			if(sum>max)
			{
				max=sum;
			}

		}
	}
	printf("%d\t",max);
	int count=0;
	int l1;
	int f=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum=0;
			count=0;
			for(int k=i,l1=0;k<j+1;k++,l1++)
			{
				arr1[l1]=arr[k];
				sum=sum+arr[k];
				count++;
				continue;
			}
			if(sum==max)
			{
				for(int i1=0;i1<count;i1++)
				{
					printf("%d\t",arr1[i1]);
				}
				f=1;
				break;
			}
		}
		if(f==1)
			break;
	}

	return 0;
}
