#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void swap(int *num1,int *num2){
	int t;
	t=*num1;
	*num1=*num2;
	*num2=t;
}
int partition(int arr[100],int low,int high){
int	 pivot=arr[low];
	int i=low-1;
	int j=high+1;
	while(true){
		do{
			i++;
		}while(arr[i]<pivot);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i>=j)
			return j;
		swap(&arr[i],&arr[j]);
	}
}
void quick_sort(int arr[100],int low,int high){
	if(low<high){
		int pi=partition(arr,low,high);
		quick_sort(arr,low,pi);
		quick_sort(arr,pi+1,high);
	}
}
int main(int argc,const char *argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	srand(time(0));
	quick_sort(arr,0,k-1);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}

