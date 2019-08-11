#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc,char *argv[]){
	int n,m,arr[30][30],k=0;
	m=atoi(argv[1]);
	n=atoi(argv[2]);
	k=3;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=atoi(argv[k++]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}




