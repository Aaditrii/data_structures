#include<stdio.h>
#include<stdlib.h>
int find_max_sum(int arr[],int k){
	int max=0,max1=0;
	for(int i=0;i<k;i++){
		max+=arr[i];
		if(max<0)
			max=0;
		if(max1<max)
			max1=max;
	}
	return max1;
}
int main(int argc,const char *argv[]){
	int arr[30],k=0;
	for(int i=1;i<argc;i++)
	arr[k++]=atoi(argv[i]);
	int maximum=find_max_sum(arr,k);
	printf("maximum is %d",maximum);
	return 0;
}
