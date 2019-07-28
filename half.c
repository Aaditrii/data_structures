#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	int arr[100],arr1[100],arr2[100],k,count,count1=0,count2=0;
	count=argc-1;
	k=0;
	for(int i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int temp=0,temp1=0;
	if(count%2==0)
	{
		for(int i=0;i<count/2;i++)
		{
			arr1[i]=arr[i];
			count1++;
		}
		temp=arr1[count1-1];
		for(int i=count1-2;i>=0;i--)
		{
			arr1[i+1]=arr1[i];
		}
		arr1[0]=temp;
		for(int i=0;i<count1;i++)
		{
			printf("%d\t",arr1[i]);
					
		}
		int l=0;
		for(int i=count/2;i<count;i++)
		{
		      arr2[l]=arr[i];
		      count2++;
		      l++;
		      }
		      temp1=arr2[0];
		      for(int i=0;i<count2-1;i++)
		      {
		      arr2[i]=arr2[i+1];
		      }
		      arr2[count2-1]=temp1;
		      for(int i=0;i<count2;i++)
		      {
		      printf("%d\t",arr2[i]);
		      }
		      }
		      else
		      {
			      for(int i=0;i<count/2;i++)
			      {
				      arr1[i]=arr[i];
				      count1++;
			      }
			      temp=arr1[count1-1];
			      for(int i=count1-2;i>=0;i--)
			      {
				      arr1[i+1]=arr1[i];
			      }
			      arr1[0]=temp;
			      for(int i=0;i<count1;i++)
			      {
				      printf("%d\t",arr1[i]);
			      }
			      printf("%d\t",arr[count/2]);
			      int l=0;
			      for(int i=count/2+1;i<count;i++)
			      {
				      arr2[l]=arr[i];
				      l++;
				      count2++;
			      }
			      temp1=arr2[0];
			      for(int i=0;i<count2-1;i++)
			      {
				      arr2[i]=arr2[i+1];
			      }
			      arr2[count2-1]=temp1;
			      for(int i=0;i<count2;i++)
			      {
				      printf("%d\t",arr2[i]);
			      }
		      }
			return 0;
}







		

