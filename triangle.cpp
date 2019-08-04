#include<iostream>
using namespace std;
void print_triangle(int arr[30][30],int n){
	cout<<"for upper triangle"<<endl;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(i!=j)
				cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"for lower triangle"<<endl;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(i!=j)
				cout<<arr[i][j]<<" ";
		}
		cout<<endl;
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
	print_triangle(arr,n);
	return 0;
}
