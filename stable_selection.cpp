#include<iostream>
#include<cstdlib>
using namespace std;
void stable_sort(int arr[100],int k){
	int key=0,min_index=0,i,j;
	for(i=0;i<k-1;i++){
		min_index=i;
		for(j=i+1;j<k;j++){
			if(arr[min_index]>arr[j])
				min_index=j;
		}
		key=arr[min_index];
		while(min_index>i){
			arr[min_index]=arr[min_index-1];
			min_index--;
		}
		arr[i]=key;
	}

}
int main(int argc,const char *argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	stable_sort(arr,k);
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
	return 0;
}
