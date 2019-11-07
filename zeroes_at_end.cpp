#include<iostream>
#include<cstdlib>
using namespace std;
void zeroes_at_end(int arr[100],int k){
	int count=0,temp=0;
	for(int i=0;i<k;i++){
		if(arr[i]!=0){
			temp=arr[i];
			arr[i]=arr[count];
			arr[count]=temp;
			count++;
		}
	}
}
void print(int arr[100],int k){
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
}
int main(int argc,const char* argv[]){
	int k=0,arr[100];
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	zeroes_at_end(arr,k);
	print(arr,k);
	return 0;
}
