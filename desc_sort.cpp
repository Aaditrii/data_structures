#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main(){
	int arr[]={1,5,8,9,10,3,4,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n,greater<int>());
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}

