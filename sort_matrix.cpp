#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
void sort_matrix(int arr[100][100],int n){
	int temp[n*n],k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp[k++]=arr[i][j];
		}
	}
	sort(temp,temp+k);
	k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=temp[k++];
		}
	}
}
int main(int argc,const char* argv[]){
	int n,arr[100][100],k=2;
	n=atoi(argv[1]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=atoi(argv[k++]);
		}
	}
	sort_matrix(arr,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
