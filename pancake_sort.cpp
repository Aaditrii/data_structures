#include<iostream>
#include<cstdlib>
using namespace std;
int find_maximum(int arr[100],int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[max]<arr[i])
			max=i;
	}
	return max;
}
void flip(int arr[100],int i){
	int start=0,temp=0;
	while(start<i){
		temp=arr[start];
		arr[start]=arr[i];
		arr[i]=temp;
		start++;
		i--;
	}
}
void pancake_sort(int arr[100],int k){
	for(int curr_size=k;curr_size>1;curr_size--){
		int mi=find_maximum(arr,curr_size);
		if(mi!=curr_size-1){
			flip(arr,mi);
			flip(arr,curr_size-1);
		}
	}
}
int main(int argc,const char *argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	pancake_sort(arr,k);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}

