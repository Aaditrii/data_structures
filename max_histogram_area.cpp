#include<iostream>
#include<cstdlib>
#include<stack>
using namespace std;
int maximum_histogram_area(int histo[100],int k){
	int top_histogram_index=0;
	int max_area=0;
	int area_with_top=0;
	int i=0;
	stack<int>stk;
	while(i<k){
		if(stk.empty()||histo[stk.top()]<=histo[i])
			stk.push(i++);
		else{
			top_histogram_index=stk.top();
			stk.pop();
			area_with_top=histo[top_histogram_index]*(stk.empty()? i : i-stk.top()-1);
			if(max_area<=area_with_top)
				max_area=area_with_top;
		}
	}
	while(!(stk.empty())){
		top_histogram_index=stk.top();
		stk.pop();
		area_with_top=histo[top_histogram_index]*(stk.empty()? i : i-stk.top()-1);
		if(max_area<=area_with_top)
			max_area=area_with_top;
	}
	return max_area;
}

int main(int argc,const char* argv[]){
	int histo[100],k=0;
	for(int i=1;i<argc;i++)
		histo[k++]=atoi(argv[i]);
	int max_area=maximum_histogram_area(histo,k);
	cout<<max_area;
	return 0;
}

