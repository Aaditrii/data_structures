#include<iostream>
#include<cstdlib>
using namespace std;
int max_difference(int arr[100],int k){
	int max=0,s=0;
	for(int i=1;i<k;i++){
		for(int j=i-1;j>=0;j--){
			if(arr[i]>arr[j]){
				s=arr[i]-arr[j];
				if(max<s)
					max=s;
		 	}
		}
	}
	return max;
}
int main(int argc,const char* argv[]){
	int k=0,arr[100];
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int max=max_difference(arr,k);
	cout<<max;
	return 0;
}

