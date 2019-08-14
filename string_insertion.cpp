#include<iostream>
#include<cstdlib>
using namespace std;
void insertion_sort(string arr[100],int k){
	string key;
	int j;
	for(int i=1;i<k;i++){
		j=i-1;
		key=arr[i];
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main(int argc,const char *argv[]){
	string arr[100];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=argv[i];
	insertion_sort(arr,k);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}
