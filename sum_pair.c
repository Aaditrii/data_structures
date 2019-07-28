#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[20],k=0,count;
	count=argc-2;
	for(int i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int f=0;
	int sum=atoi(argv[argc-1]);
		for(int i=0;i<count;i++)
		{
			for(int j=i+1;j<count;j++)
			{
				if(arr[i]+arr[j]==sum)
				{
					printf("%d\t",arr[i]);
					printf("%d\t",arr[j]);
					f=1;
					printf("\n");
				}
			}
		}
	if(f==0)
		printf("no pair found");
	 return 0;
}

