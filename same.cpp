#include<iostream>
#include<cstdlib>
using namespace std;
void arrange_same_index_value(int arr[100],int k){
	int f=0,temp=0,temp1[100],count=0;
	for(int i=0;i<k;i++){
		f=0;
		for(int j=0;j<k;j++){
			if(arr[j]==i){
				f=1;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				break;
			}
		}
		for(int j=0;j<count;j++){
			if(i==temp1[j]){
				arr[i]=temp1[j];
				f=1;
				break;
			}
		}
		if(f==0){
			temp1[count++]=arr[i];
			arr[i]=-1;
		}
	}
}
void print(int arr[100],int k){
	for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
}
int main(int argc,const char* argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	arrange_same_index_value(arr,k);
	print(arr,k);
	return 0;
}
