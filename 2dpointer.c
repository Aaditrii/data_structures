#include<stdio.h>
int main(){
	int *ptr[10][10];
	int arr[10][10];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
			ptr[i][j]=&arr[i][j];
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",*ptr[i][j]);
		}
printf("\n");		
	}
	return 0;
}

