#include<iostream>
#include<cstdlib>
using namespace std;
void selection_sort(int arr[30],int n){
int min_index,i,j,temp=0;
	for(i=0;i<n-1;i++){
		min_index=i;
		for(int j=i+1;j<n;j++){
			if(arr[min_index]>arr[j])
				min_index=j;
		}
		temp=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=temp;
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main(){
	int arr[30],k;
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>arr[i];
	}
	selection_sort(arr,k);
	return 0;
}

