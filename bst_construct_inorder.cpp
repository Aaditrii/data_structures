#include<iostream>
#include<cstdlib>
using namespace std;
class Node{
	public:
		int data;
		Node* next[2];
		Node(int data){
			this->data=data;
			next[0]=next[1]=NULL;
		}
};
int maximum(int start,int end,int arr[100]){
	int max=0,max_index=0;
	for(int i=start;i<=end;i++){
		if(max<arr[i]){
			max=arr[i];
			max_index=i;
		}
	}
	return max_index;
}
Node* construct_bst(int arr[100],int low,int high){
	if(low>high)
		return NULL;
	int index=maximum(low,high,arr);
	Node* root=new Node(arr[index]);
	if(low==high)
		return root;
	root->next[0]=construct_bst(arr,low,index-1);
	root->next[1]=construct_bst(arr,index+1,high);
	return root;
}
void print_inorder(Node* root){
	if(root==NULL)
		return;
	print_inorder(root->next[0]);
	cout<<root->data<<" ";
	print_inorder(root->next[1]);
}
		
int main(int argc,const char* argv[]){
	int arr[100],k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=atoi(argv[i]);
	Node* root=construct_bst(arr,0,k-1);
	print_inorder(root);
	return 0;
}
