#include<iostream>
using namespace std;
void insertion_sort(int arr[30],int n){
	int key,i,j;
	for(int i=1;i<n;i++){
		j=i-1;
		key=arr[i];
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
for(int i1=0;i1<n;i1++)
cout<<arr[i1]<<" ";
}
int main(){
int arr[30],n;
cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	insertion_sort(arr,n);
	return 0;
}
