#include<iostream>
#define ROTATIONS 1
#define M 2
#define N 3
using namespace std;
void rotate(int row,int col,int arr[M][N],int n1,int m1){
	int curr=0,prev=0;
	if(row>=M/2||col>=N/2)
		return;
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
	rotate(row,col,arr,n1,m1);
}

int main(void){
	int arr[M][N]={{1,2,3},{4,5,6}};
	int n1=N;
	int m1=M;
	for(int i=0;i<ROTATIONS;i++)
		rotate(0,0,arr,n1,m1);
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
