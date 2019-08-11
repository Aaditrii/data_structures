#include<stdio.h>
#include<stdlib.h>
void reverse_arr(int arr[],int n)
{
	if(n-1>=0)
	{
		printf("%d\t",arr[n-1]);
		reverse_arr(arr,n-1);
	}
}
int main(int argc,const char *argv[])
{
int arr[100],k=0;
int n=argc-1;
for(int i=1;i<argc;i++)
{
	arr[k]=atoi(argv[i]);
	k++;
}
reverse_arr(arr,n);
return 0;
}

