#include<stdio.h>
#include<stdlib.h>
int main(){
	int r,c,*arr[r];
	scanf("%d %d",&r,&c);
	for(int i=0;i<r;i++)
		arr[i]=(int *)malloc(c*sizeof(int));
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			printf("%d ",*(*(arr+i)+j));
	return 0;
}


