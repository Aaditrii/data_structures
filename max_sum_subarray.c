#include<stdio.h>
#include<stdlib.h>
void find_max_sum(int arr[],int k){
	int max=0,max1=0,start=0,end=0,s=0;
	for(int i=0;i<k;i++){
		max+=arr[i];
		if(max<0){
			max=0;
			s=i+1;
		}
		if(max1<max){
			max1=max;
			start=s;
			end=i;
		}
		
	}
	for(int i=start;i<=end;i++)
		printf("%d\t",arr[i]);
}
int main(int argc,const char *argv[]){
	int arr[30],k=0;
	for(int i=1;i<argc;i++)
	arr[k++]=atoi(argv[i]);
	find_max_sum(arr,k);
	return 0;
}
