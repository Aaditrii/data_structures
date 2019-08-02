#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	cout<<"rotate by 180 degrees"<<endl;
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}

