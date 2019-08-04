#include<iostream>
using namespace std;
int get_ring(int arr[30][30],int m,int n){
	int row1,sum=0,max=0,row=0,col=0;
	int m1=m;
	int n1=n;
	while(row<=m/2&&col<=n/2){
		sum=0;
		for(int i=col;i<n1;i++){
			sum=sum+arr[row][i];
		}
		for(int i=row+1;i<m1;i++){
			sum=sum+arr[i][n1-1];
		}
		for(int i=n1-2;i>=col;i--)
			sum=sum+arr[m1-1][i];
		for(int i=m1-2;i>=row+1;i--)
			sum=sum+arr[i][col];
		if(max<sum){
			max=sum;
			row1=row+1;
		}
		row++;
		col++;
		m1--;
		n1--;
	}
	return row1;
}
int main(){
	int arr[30][30];
	int n,m;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int no=get_ring(arr,m,n);
	cout<<"ring number with largest sum is"<<no;
	return 0;
}
