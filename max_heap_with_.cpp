#include<iostream>
#include<cstdlib>
#include<vector>
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
void max_heap(Node* root,vector<int>arr,int i);
Node* insert(Node* root,int data);
void inorder_push(Node* root,vector<int>&arr);
void convert_postorder(Node* root);
void convert_max_heap_util(Node* root,int l);
void max_heap(Node* root,vector<int>arr,int *i){
	if(root==NULL)
		return;
	root->data=arr[--*i];
	max_heap(root->next[1],arr,i);
	max_heap(root->next[0],arr,i);
}
Node* insert(Node* root,int data){
	if(root==NULL)
		return new Node(data);
	if(root->data>data)
		root->next[0]=insert(root->next[0],data);
	if(root->data<data)
		root->next[1]=insert(root->next[1],data);
	return root;
}
void inorder_push(Node* root,vector<int>&arr){
	if(root == NULL)
		return;
	inorder_push(root->next[0],arr);
	arr.push_back(root->data);
	inorder_push(root->next[1],arr);
}
void convert_postorder(Node* root,int count){
	if(root == NULL)
		return;
	convert_postorder(root->next[0],1);
	convert_postorder(root->next[1],1);
	cout<<root->data;
	if(count==1)
		cout<<"_";

}
void convert_max_heap_util(Node* root,int l){
vector<int>arr;
int i = l;
inorder_push(root,arr);
max_heap(root,arr,&i);
}
int main(int argc,const char* argv[]){
	Node* root = NULL;
	root = insert(root,atoi(argv[1]));
	for(int i = 2; i < argc ; i++)
		root = insert(root,atoi(argv[i]));
	convert_max_heap_util(root,argc-1);
	int count=2;
	convert_postorder(root,count);
	return 0;
}

