#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int *num1,int  *num2){
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}
void merge_minimize(int arr1[100],int arr2[100],int n1,int n2){
	int min_index=0;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(arr1[i]>arr2[j])
				swap(arr1[i],arr2[j]);
		}
	}
	for(int i=0;i<n2-1;i++){
		min_index=i;
		for(int j=i+1;j<n2;j++){
			if(arr2[j]<arr2[min_index])
				min_index=j;
		}
		swap(&arr2[min_index],&arr2[i]);
	}

}
int main(int argc,const char* argv[]){
	int arr1[100],arr2[100],n1,n2,k1=0,k2=0;
	n1=atoi(argv[1]);
	n2=atoi(argv[2]);
	for(int i=3;i<3+n1;i++)
		arr1[k1++]=atoi(argv[i]);
	for(int i=3+n1;i<argc;i++)
		arr2[k2++]=atoi(argv[i]);
	merge_minimize(arr1,arr2,n1,n2);
	for(int i=0;i<n1;i++)
		cout<<arr1[i]<<" ";
	cout<<endl;
	for(int i=0;i<n2;i++)
		cout<<arr2[i]<<" ";
	return 0;
}
