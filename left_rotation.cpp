#include<iostream>
using namespace std;
void anti_clockwise_rotate(int row,int col,int arr[30][30],int m,int n,int m1,int n1){
	int prev=0,curr=0;
	if(row>=m/2||col>=n/2)
		return ;
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
	anti_clockwise_rotate(row,col,arr,m,n,m1,n1);
}

int main(){
	int arr[30][30],m1,n1,m,n,rotations;
	cout<<"Enter the value of m and n"<<endl;
	cin>>m>>n;
	m1=m;
	n1=n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Enter the number of rotations you want to do"<<endl;
	cin>>rotations;
	for(int i=0;i<rotations;i++){
		anti_clockwise_rotate(0,0,arr,m,n,m1,n1);
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


