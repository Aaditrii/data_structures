#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int k=0,count,arr[100],count1=0;
	count=argc-1;
	for(int i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	
		for(int i=0;i<count;i++)
		{
			for(int j=i+1;j<count;j++)
			{
				if(arr[i]>arr[j])
				{
					count1++;
					break;
				}
			}
		}
		printf("Array is right rotated and by %d rotations",count1);
	return 0;
}

