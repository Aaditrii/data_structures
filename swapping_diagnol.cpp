#include<iostream>
using namespace std;
void swap_diagnol(int arr[30][30],int n){
	int row=0,col=0,n1,temp=0;
	n1=n;
	while(row<n/2||col<n/2){
		temp=arr[row][col];
		arr[row][col]=arr[col][n1-1];
		arr[col][n1-1]=temp;
		temp=arr[n1-1][col];
		arr[n1-1][col]=arr[n1-1][n1-1];
		arr[n1-1][n1-1]=temp;
		row++;
		col++;
		n1--;
	}
}

int main(){
	int arr[30][30],n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	swap_diagnol( arr,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
