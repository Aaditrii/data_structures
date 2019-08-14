#include<iostream>
using namespace std;
void string_sort(string arr[10],int k){
	int min_index=0;
	string temp;
	for(int i=0;i<k-1;i++){
		min_index=i;
		for(int j=i+1;j<k;j++){
			if(arr[min_index]>arr[j])
				min_index=j;
		}
		temp=arr[min_index];
		arr[min_index]=arr[i];
		arr[i]=temp;
	}
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
}
int main(int argc,const char *argv[]){
	string arr[10];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=argv[i];
	string_sort(arr,k);
	return 0;
}
