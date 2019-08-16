#include<iostream>
#include<cstdlib>
using namespace std;
void bubble_sort(string arr[100],int n){
           string temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(int argc,const char *argv[]){
	string arr[100];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=argv[i];
	bubble_sort(arr,k);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}
