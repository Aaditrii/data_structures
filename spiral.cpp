#include<iostream>
using namespace std;
void print_spiral(int row,int col,int arr[30][30],int n,int n1,int count){
	if(row>n/2||col>n/2)
		return;
	for(int i=col;i<n1;i++){
		arr[row][i]=count++;
	}
	for(int i=row+1;i<n1;i++){
		arr[i][n1-1]=count++;
	}
	for(int i=n1-2;i>=col;i--){
		arr[n1-1][i]=count++;
	}
	for(int i=n1-2;i>=row+1;i--){
		arr[i][col]=count++;
	}
	n1--;
	row++;
	col++;
	print_spiral(row,col,arr,n,n1,count);
}
int main(){
	int arr[30][30],n,n1,count=1;
	cout<<"Enter the number of elements with which you want to make the spiral"<<endl;
	cin>>n;
	n1=n;
	print_spiral(0,0,arr,n,n1,count);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
