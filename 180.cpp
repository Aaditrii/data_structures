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
	cout<<"rotate by 90 degrees"<<endl;
	int j=0;
		for(int i1=0;i1<n;i1++){
			for(int i2=n-1;i2>=0;i2--)
			{
				cout<<arr[i2][j]<<" ";
			}
			j++;
			cout<<endl;
		}
	return 0;
}

