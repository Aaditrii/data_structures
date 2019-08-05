#include<stdio.h>
int main(){
	int arr[5],*ptr[5];
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<5;i++){
		ptr[i]=&arr[i];
		printf("%d ",*ptr[i]);
	}
	return 0;
}
