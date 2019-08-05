#include<iostream>
using namespace std;
int search_subset(int arr[30],int num,int low,int high){
	if(low>high)
		return -1;
	int mid=low+(high-low)/2;
	if(arr[mid]==num)
		return 1;
	if(arr[mid]<num)
		return search_subset(arr,num,mid+1,high);
	return search_subset(arr,num,low,mid-1);
}
int main(){
	int arr[30],arr1[30],low,high,num;
	int n,n1,f,temp;
	cin>>n>>n1;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n1;i++)
		cin>>arr1[i];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<=n-1;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n1;i++){
		num=arr1[i];
		f=search_subset(arr,num,0,n-1);
		if(f!=1)
			break;
	}
	if(f==1)
		cout<<"yes";
	else
		cout<<"no";
	return 0;
}
