#include<iostream>
#include<cstdlib>
using namespace std;
void print_array(int arr[100],int k){
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
}
void reverse(int arr[100],int start,int end){
	int temp=0;
	while(start<end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void rotate_right(int arr[100],int d,int k){
	reverse(arr,0,d-1);
	reverse(arr,d,k-1);
	reverse(arr,0,k-1);
}
int main(int argc,const char* argv[]){
	int k=0,arr[100];
	for(int i=1;i<argc-1;i++)
		arr[k++]=atoi(argv[i]);
	int d=atoi(argv[argc-1]);
	rotate_right(arr,d,k);
	print_array(arr,k);
	return 0;
}

