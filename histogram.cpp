#include<iostream>
#include<cstdlib>
using namespace std;
int histogram_area(int arr[100],int k){
	int max=0,count=0,area=0,max1=0;
	for(int i=0;i<k;i++){
		if(max<arr[i])
			max=arr[i];
	}
	for(int i=1;i<=max;i++){
		count=0;
		for(int j=0;j<k;j++){
			if(arr[j]>=i){
				count++;
				area=count*i;
			if(area>max1)
				max1=area;
			}
			else
				count=0;
		}
	}
	return max1;
}
int main(int argc,const char* argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	int area=histogram_area(arr,k);
	cout<<area<<endl;
	return 0;
}
