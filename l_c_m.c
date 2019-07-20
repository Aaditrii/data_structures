#include<stdio.h>
#include<stdlib.h>
int g_c_d(int a,int b)
{
	if(b==0)
		return a;
	return (g_c_d(b,a%b));
}
int l_c_m(int arr[],int count)
{
	int ans=arr[0];
	for(int i=1;i<count;i++)
	{
		ans=(((ans*arr[i])/g_c_d(arr[i],ans)));
	}
	return ans;
}

int main(int argc,const char *argv[])
{
	int arr[10],k=0;
	int count=argc-1;
	for(int i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int lcm=l_c_m(arr,count);
	printf("the lcm is %d",lcm);
	return 0;
}

