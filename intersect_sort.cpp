#include<iostream>
#include<cstdlib>
using namespace std;
void get_intersection(int arr1[100],int arr2[100],int n1,int n2){
	int i=0,j=0,f=0;
	while(i<n1&&j<n2){
		if(arr1[i]>arr2[j]){
			j++;
		}
		else if(arr1[i]<arr2[j])
			i++;
		else{
			cout<<arr1[i]<<" ";
			i++;
			j++;
			f=1;
		}
	}
	if(f==0)
		cout<<"no intersection array found!";
}
int main(int argc,const char* argv[]){
	int arr1[100],arr2[100],k1=0,k2=0;
	cout<<"print the number of elements of first array"<<endl;
	int n1=atoi(argv[1]);
	cout<<n1<<endl;
	cout<<"print the number of elements of second array"<<endl;
	int n2=atoi(argv[2]);
	cout<<n2<<endl;
	for(int i=0;i<n1;i++){
		arr1[k1++]=atoi(argv[i+3]);
	}
	for(int i=0;i<n2;i++){
		arr2[k2++]=atoi(argv[k1+3+i]);
	}
	get_intersection(arr1,arr2,n1,n2);
	return 0;
}

