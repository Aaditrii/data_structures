#include<iostream>
using namespace std;
void multiply(int arr1[30][30],int arr2[30][30],int m,int n,int p,int q){
	int sum=0;
	for(int i=0;i<m;i++){
	for(int j=0;j<q;j++){
		sum=0;
		for(int k=0;k<p;k++){
		sum=sum+arr1[i][k]*arr2[k][j];
			}
			cout<<sum<<" "; 
			}
			cout<<endl;
		}
}
int main(){
	int arr1[30][30],m,n,p,q,arr2[30][30];
	cin>>m>>n>>p>>q;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr1[i][j];
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			cin>>arr2[i][j];
		}
	}
	if(n!=p)
		cout<<"matrix cannot be multiplied";
	else
	multiply(arr1,arr2,m,n,p,q);
	return 0;
}
