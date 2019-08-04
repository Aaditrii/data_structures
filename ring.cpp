#include<iostream>
using namespace std;
void rotate(int row,int col,int arr[30][30],int m,int n,int n1,int m1){
	int curr=0,prev=0;
	if(row>=m/2||col>=n/2)
		return;
	if(row%2==0)
	{
	prev=arr[row+1][col];
	for(int i=col;i<n1;i++){
		curr=arr[row][i];
		arr[row][i]=prev;
		prev=curr;
	}
	for(int i=row+1;i<m1;i++){
		curr=arr[i][n1-1];
		arr[i][n1-1]=prev;
		prev=curr;
	}
	for(int i=n1-2;i>=col;i--){
		curr=arr[m1-1][i];
		arr[m1-1][i]=prev;
		prev=curr;
	}
	for(int i=m1-2;i>=row+1;i--){
		curr=arr[i][col];
		arr[i][col]=prev;
		prev=curr;
	}
	row++;
	col++;
	n1--;
	m1--;
	rotate(row,col,arr,m,n,m1,n1);
	}
	else{	
		prev=arr[row][col+1];
	for(int i=row;i<m1;i++){
		curr=arr[i][col];
		arr[i][col]=prev;
		prev=curr;
	}
	for(int i=col+1;i<n1;i++){
		curr=arr[m1-1][i];
		arr[m1-1][i]=prev;
		prev=curr;
	}
	for(int i=m1-2;i>=col;i--){
		curr=arr[i][n1-1];
		arr[i][n1-1]=prev;
		prev=curr;
	}
	for(int i=n1-2;i>=col+1;i--){
		curr=arr[row][i];
		arr[row][i]=prev;
		prev=curr;
	}
	row++;
	col++;
	n1--;
	m1--;
	rotate(row,col,arr,m,n,m1,n1);
	}

}

int main(){
	int arr[30][30];
	int N,M;
	cin>>M;
	cin>>N;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>arr[i][j];
		}
	}
	int n1=N;
	int m1=M;
	rotate(0,0,arr,M,N,n1,m1);
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
