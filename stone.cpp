#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	cout<<"Enter the hand where the stone can be found"<<endl;
	cout<<"Press 1 for right hand"<<endl;
	cout<<"Press 2 for left hand"<<endl;
	cout<<"Press 0 for stone not in any of the hands"<<endl;
	int handno;
	cin>>handno;
	srand(time(0));
	int randomhand=rand()%3;
	if(randomhand==handno){
		cout<<"HURRAY!YOU WON"<<endl;
		if(handno==1)
		cout<<"the stone is in right hand";
		else if(handno==2)
			cout<<"the stone is in left hand";
		else
			cout<<"stone not found";
	}
	else
		cout<<"TRY NEXT TIME :("<<endl;
	cout<<"****************************************************************************************"<<endl;
	return 0;
}

