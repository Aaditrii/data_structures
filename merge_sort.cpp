#include<iostream>
#include<cstdlib>
using namespace std;
void merge(int arr[30],int low,int mid,int high){
	int n1,n2,left[30],right[30];
	n1=mid-low+1;
	n2=high-mid;
	for(int i=0;i<n1;i++)
		left[i]=arr[i+low];
	for(int j=0;j<n2;j++)
		right[j]=arr[mid+1+j];
	int i1=0,j1=0,k=low;
	while(i1<n1&&j1<n2){
		if(left[i1]<=right[j1]){
			arr[k]=left[i1];
			i1++;
		}
		else{
			arr[k]=right[j1];
			j1++;
		}
		k++;
	}
	while(i1<n1){
		arr[k++]=left[i1];
		i1++;
	}
	while(j1<n2){
	        arr[k++]=right[j1];
		j1++;
	}
}
void merge_sorting(int arr[30],int low,int high){
	if(low<high){
	int mid=low+(high-low)/2;
	merge_sorting(arr,low,mid);
	merge_sorting(arr,mid+1,high);
	merge(arr,low,mid,high);
	}
}
int main(int argc,const char* argv[]){
	int arr[30],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	merge_sorting(arr,0,k-1);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}
