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
Node* construct_tree(Node* root,int arr[100],int i,int k){
    if(i<k){
        Node* node=new Node(arr[i]);
        root=node;
        if(arr[2*i+1]!=-1)
        root->next[0]=construct_tree(root->next[0],arr,2*i+1,k);
        if(arr[2*i+2]!=-1)
        root->next[1]=construct_tree(root->next[1],arr,2*i+2,k);
    }
    return root;
}
void inorder_traverse(Node* root,vector<int>&arr){
        if(root==NULL)
                return;
        inorder_traverse(root->next[0],arr);
        arr.push_back(root->data);
        inorder_traverse(root->next[1],arr);
}
void convert_min_heap(Node* root,vector<int>arr,int *i){
        if(root==NULL)
                return;
        root->data=arr[++*i];
        convert_min_heap(root->next[0],arr,i);
        convert_min_heap(root->next[1],arr,i);
}
void min_heap_util(Node* root){
        vector<int>arr;
        int i=-1;
        inorder_traverse(root,arr);
        convert_min_heap(root,arr,&i);
}
int sum=0;
int count=0;
void print_sum(Node* root,int s){
    if(root==NULL)
    return;
    sum=sum+root->data;
    count++;
    if(count==s){
        cout<<sum;
    return;
    }
    print_sum(root->next[0],s);
    print_sum(root->next[1],s);
    
}
int main(int argc,const char* argv[]){
    int arr[100];
    int k=0;
    int s=atoi(argv[1]);
    for(int i=2;i<argc;i++)
    arr[k++]=atoi(argv[i]);
    Node* root=NULL;
    root=construct_tree(root,arr,0,k);
    min_heap_util(root);
    print_sum(root,s);
    return 0;
}
    

