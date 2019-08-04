#include<iostream>
using namespace std;
void transpose(int arr[50][50],int n){
	int temp=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
}
void mirror_image(int arr[50][50],int n){
	int temp=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n/2;j++){
			temp=arr[i][j];
			arr[i][j]=arr[i][n-1-j];
			arr[i][n-1-j]=temp;
		}
	}
}
int main(){
	int n,arr[50][50];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	transpose(arr,n);
	mirror_image(arr,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
