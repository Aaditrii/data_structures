#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main(){
	array<int,6>ar,ar1;
	for(int i=0;i<6;i++)
		cin>>ar[i];
	for(int i=0;i<6;i++)
		cin>>ar1[i];
	for(int i=0;i<6;i++)
		cout<<ar.at(i)<<" ";//accessing the elements
	cout<<endl;
		cout<<get<0>(ar)<<" ";//accessing the element
	cout<<endl;
	cout<<ar.front()<<" "<<ar.back()<<endl;//accessing front & back element
	cout<<ar.max_size()<<" "<<ar.size();//maximum size & size of array
	ar.swap(ar1);
	cout<<endl;
	for(int i=0;i<6;i++)
		cout<<ar1[i]<<" ";
	cout<<endl;
	array<int,0>ar2;
	if(ar2.empty())
		cout<<"array is empty";
	else
		cout<<"array is not empty";
	ar.fill(8);//fill the array ar with 8
	for(int i=0;i<6;i++)
		cout<<ar[i]<<" ";
	return 0;
}
