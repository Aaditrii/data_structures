#include<iostream>
#include<cstdlib>
using namespace std;
void binary_add(int arr1[100],int arr2[100],int n){
	int a[n+1], c=0,k=0;
	for(int i=n-1;i>=0;i--){
		if((arr1[i]==0&&arr2[i]==1)||(arr1[i]==1&&arr2[i]==0)){
			if(c==1&&i==0){
				a[k]=0;
				a[k+1]=1;
			}
			else if(c==1){
				a[k++]=0;
				c=1;
			}
			else{
				a[k++]=1;
				c=0;
			}
		}
		else if(arr1[i]==0&&arr2[i]==0){
			if(c==1){
				a[k++]=1;
				c=0;
			}
			else{
				a[k++]=0;
				c=0;
			}
		}
		else{
			if(c==1&&i==0){
				a[k++]=1;
				a[k++]=1;
			}
			else if(c==1){
				a[k++]=1;
				c=1;
			}
			else{
				a[k++]=0;
				c=1;
			}
		}
	}
	for(int i=k-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
}
int main(int argc,const char* argv[]){
	int arr1[100],arr2[100],n,k=0,l=0;
	n=atoi(argv[1]);
	for(int i=2;i<=n+1;i++){
		arr1[k++]=atoi(argv[i]);
	}
	cout<<endl;
	for(int i=n+2;i<argc;i++){
		arr2[l++]=atoi(argv[i]);
	}
	binary_add(arr1,arr2,n);
	return 0;
}

