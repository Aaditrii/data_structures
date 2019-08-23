#include<iostream>
using namespace std;
class Node{
	private:
		int data;
		Node* next;
	public:
		Node(int d,Node* next){
			data=d;
			this->next=next;
		}
		int get_data(){
			return data;
		}
		Node* get_next_node(){
			return next;
		}
};
class MyLinkedList{
	private:
		Node* head;
	public:
		MyLinkedList(Node* head){
			this->head=head;
		}
		void transverse();
};
void MyLinkedList::transverse(){
	while(head!=NULL){
		cout<<head->get_data();
		head=head->get_next_node();
	}
}
int main(int argc,const char* argv[]){
	/*Node* node3=new Node(3,NULL);
	Node* node2=new Node(2,node3);
	Node* head=new Node(1,node2);
	*/
	Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		Node* temp=new Node(atoi(argv[i]),head);
				head=temp;
				}

	MyLinkedList *l=new MyLinkedList(head);
	l->transverse();
	return 0;
}
