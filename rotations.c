#include<stdio.h>
#include<stdlib.h>
int find_rotations(int arr[],int k)
{
	int temp=0,arr1[20],count1=0,count=0,max=0,f=0;
	for(int i=0;i<k;i++){
		arr1[i]=arr[i];

	}
	for(int i=1;i<k-1;i++){
		count=0;
		f=0;
		temp=arr[k-1];
		for(int j=k-2;j>=0;j--)
			arr[j+1]=arr[j];
		arr[0]=temp;
		for(int i=0;i<k;i++){
			if(arr[i]!=arr1[i]){
			count++;
			f=1;
			}
		}
		if(f==0){
			count1=0;
			break;
		}
		if(max<count){
			max=count;
			count1++;
		}
		if(max==k)
			break;
	}
	return count1;
}


int main(int argc,const char *argv[]){
	int k=0,arr[20];
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	int r=find_rotations(arr,k);
	printf("%d",r);
	return 0;
}
