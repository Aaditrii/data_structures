#include<iostream>
#include<cstdlib>
using namespace std;
void recursion_selection(int arr[30],int k,int i){
	int min_index=i;
	int temp=0;
	if(i==k)
		return;
	for(int j=i+1;j<k;j++){
		if(arr[min_index]>arr[j])
			min_index=j;
	}
	temp=arr[min_index];
	arr[min_index]=arr[i];
	arr[i]=temp;
	recursion_selection(arr,k,i+1);
}
 int main(int argc,const char *argv[]){
	int arr[30],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	recursion_selection(arr,k,0);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}
