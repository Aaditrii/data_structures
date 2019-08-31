#include<iostream>
#include<cstdlib>
#include"nodeclass.h"
using namespace std;
class Mylinkedlist{
	private:
		Node* head;
	public:
		Mylinkedlist(Node* head){
			this->head=head;
		}
		void findMiddle();
};
void Mylinkedlist::findMiddle(){
	int count=0,count1=0,n;
	Node* temp1=head;
	while(head!=NULL){
		count++;
		head=head->get_next();
	}
	n=count/2;
	while(temp1!=NULL){
		if(count1==n){
			cout<<temp1->get_data();
			break;
		}
		count1++;
		temp1=temp1->get_next();
	}
}
int main(int argc,const char* argv[]){
	Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		Node* temp=new Node(atoi(argv[i]),head);
		head=temp;
		}
	Mylinkedlist *l=new Mylinkedlist(head);
		l->findMiddle();
		return 0;	
}
