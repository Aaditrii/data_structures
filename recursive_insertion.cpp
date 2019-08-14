#include<iostream>
#include<cstdlib>
using namespace std;
void recursive_insertion(int arr[100],int k,int i){
	if(i==k)
		return;
	int j=i-1;
	int key=arr[i];
	while(j>=0&&arr[j]>key){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=key;
	recursive_insertion(arr,k,i+1);
}
int main(int argc,const char *argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	recursive_insertion(arr,k,1);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}
