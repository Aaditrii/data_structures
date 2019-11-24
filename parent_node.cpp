
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
void find_parent(Node* root,int s){
    if(root==NULL){
    return;
    }
   if(root->next[0]!=NULL){
       if(root->next[0]->data==s){
           cout<<root->data;
           return;
       }
   }
   if(root->next[1]!=NULL){
       if(root->next[1]->data==s){
           cout<<root->data;
           return;
       }
   }
    if(root->data==s){
        cout<<"-1";
        return;
    }
    find_parent(root->next[0],s);
    find_parent(root->next[1],s);
}
int main(int argc,const char* argv[]){
    int arr[100];
    int k=0;
    int s=atoi(argv[1]);
    for(int i=2;i<argc;i++)
    arr[k++]=atoi(argv[i]);
    Node* root=NULL;
    root=construct_tree(root,arr,0,k);
   if(root==NULL)
   cout<<"-1";
    find_parent(root,s);
    return 0;
}
    

