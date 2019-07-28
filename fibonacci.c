#include<stdio.h>
int fibonacci(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
		return(fibonacci(n-1)+fibonacci(n-2));
}
int main(void)
{
	int n;
	printf("Enter the number of elements for fibonacci series");
	scanf("%d",&n);
	int c=fibonacci(n);
	printf("%d",c);
	return 0;
}

