#include<iostream>
#include<cstdlib>
using namespace std;
void frequency_sort(int arr[100],int k){
	int m=0,n=0,count1[30],count2[30],b,temp=0,temp1=0;
	for(int i=0;i<k;i++){
		b=arr[i];
		if(arr[i]!=-999){
			for(int j=i;j<k;j++){
				if(b==arr[j]){
					count1[m]++;
					arr[j]=-999;
				}
			}
			count2[n]=b;
			n++;
			m++;
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<=n-1;j++){
			if(count1[i]>count1[j]){
				temp=count1[i];
				count1[i]=count1[j];
				count1[j]=temp;
				temp1=count2[i];
				count2[i]=count2[j];
				count2[j]=temp1;
			}
			if(count1[i]==count1[j]){
				if(count2[i]>count2[j]){
					temp=count2[i];
					count2[i]=count2[j];
					count2[j]=temp;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<count1[i];j++){
			cout<<count2[i]<<" ";
		}
	}			
}
int main(int argc,const char *argv[]){
	int k=0,arr[100];
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	frequency_sort(arr,k);
	return 0;
}

