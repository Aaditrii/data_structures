#include<iostream>
using namespace std;
void rotate_by_180(int arr[30][30],int n){
	int temp=0;
	for(int i=0;i<n/2;i++){
		for(int j=n-1;j>=0;j--){
			temp=arr[i][n-j-1];
			arr[i][n-j-1]=arr[n-i-1][j];
	        	arr[n-i-1][j]=temp;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
        int arr[30][30];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	rotate_by_180(arr,n);
	return 0;
}

