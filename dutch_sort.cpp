#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int *num1,int *num2){
	int t;
	t=*num1;
	*num1=*num2;
	*num2=t;
}
void dutch_sort(int arr[],int k){
	int low=0;
	int mid=0;
	int high=k-1;
	while(mid<=high){
		switch(arr[mid]){
			case 0:
				swap(&arr[low++],&arr[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(&arr[mid],&arr[high--]);
				break;
		}
	}
}
int main(int argc,const char *argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	dutch_sort(arr,k);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}
