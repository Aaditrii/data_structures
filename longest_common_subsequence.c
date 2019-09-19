#include<stdio.h>
#include<string.h>
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int maximum_subsequence(char x[100],char y[100],int l1,int l2){
	int lcs[l1+1][l2+1];
	for(int i=0;i<=l1;i++){
		for(int j=0;j<=l2;j++){
			if(i==0||j==0)
				lcs[i][j]=0;
			else if(x[i-1]==y[j-1])
				lcs[i][j]=1+lcs[i-1][j-1];
			else
				lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
		}
	}
	return lcs[l1][l2];
}
int main(int argc,const char* argv[]){
	char x[100],y[100];
	int l1,l2;
	strcpy(x,argv[1]);
	strcpy(y,argv[2]);
	l1=strlen(x);
	l2=strlen(y);
	int max=maximum_subsequence(x,y,l1,l2);
	printf("%d",max);
	return 0;
}
