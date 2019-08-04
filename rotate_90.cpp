#include<iostream>
using namespace std;
void rotate_90_degree(int arr[30][30],int n){
	int temp;
	for(int i=0;i<n/2;i++){
		for(int j=i;j<=n/2;j++){
			temp=arr[n-1-j][i];
			arr[n-1-j][i]=arr[n-1-i][n-1-j];
			arr[n-1-i][n-1-j]=arr[j][n-1-i];
			arr[j][n-1-i]=arr[i][j];
			arr[i][j]=temp;
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
	int arr[30][30];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	rotate_90_degree(arr,n);
	return 0;
}
