#include<iostream>
#include<cstdlib>
using namespace std;
//making node class
class Node{
	public:
	int data;
	Node* next;
};
//get the tail of the list
Node* getTail(Node *head){
	Node* curr = head;
	while(curr != NULL && curr->next != NULL)
		curr = curr->next;
	return curr;
}
//setting up the pivot at correct position
Node* partition(Node* head,Node* end,Node** newHead,Node** newEnd){
	Node* curr = head,*pivot = end,*prev = NULL,*tail = pivot;
	while(curr != pivot){
		if(curr->data<pivot->data){
			if(*newHead == NULL)
				*newHead = curr;
			prev = curr;
			curr = curr->next;
		}
		else{
			if(prev)
				prev->next = curr->next;
			Node* temp = curr->next;
			curr->next = NULL;
			tail->next = curr;
			tail = curr;
			curr = temp;
		}
	}
	if(*newHead==NULL)
		*newHead = pivot;
	*newEnd = tail;
	return pivot;
}
//sorting the left or right portion of the pivot accordingly
Node* quick_sort_recursion(Node* head,Node* end){
	if(!head || head == end)
		return head;
	Node* newHead = NULL,*newEnd = NULL;
	Node* pivot = partition(head,end,&newHead,&newEnd);
	if(newHead != pivot){
		Node* tmp = newHead;
		while(tmp->next!= pivot)
			tmp = tmp->next;
		tmp->next = NULL;
		newHead = quick_sort_recursion(newHead,tmp);
		tmp = getTail(newHead);
		tmp->next = pivot;
	}
	pivot->next = quick_sort_recursion(pivot->next,newEnd);
	return newHead;
}
void quick_sort(Node** headref){
       *headref = quick_sort_recursion(*headref,getTail(*headref));
	return ;
}
void printList(Node* head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

int main(int argc,const char* argv[]){
	Node *head=NULL;
	for(int i=argc-1;i>=1;i--){
		Node *temp = new Node();
		temp -> data = atoi(argv[i]);
		temp -> next = head;
		head = temp;
	}
	quick_sort(& head);
	printList(head);
	return 0;
}

