#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    string data;
    Node* next[2];
    Node(string data){
        this->data=data;
        next[0]=next[1]=NULL;
    }
};

Node* construct_binary_tree(Node* root,int i,int k,string arr[200]){
    if(i<k){
    Node* new_node=new Node(arr[i]);
    root=new_node;
    if(arr[2*i+1]!="_")
    root->next[0]=construct_binary_tree(root->next[0],2*i+1,k,arr);
    if(arr[2*i+2]!="_")
    root->next[1]=construct_binary_tree(root->next[1],2*i+2,k,arr);
    }
    return root;
    
}
void print_left_view(Node* root,queue<Node*>q){
    if(root==NULL)
    return;
    q.push(root);
    q.push(NULL);
    while(!(q.empty())){
        Node* temp=q.front();
        if(temp){
            cout<<temp->data;
            while(q.front()!=NULL){
                if(temp->next[1])
                q.push(temp->next[1]);
                if(temp->next[0])
                q.push(temp->next[0]);
                q.pop();
                temp=q.front();
            }
            q.push(NULL);
        }
        q.pop();
    }
}
void print_left(Node* root){
    queue<Node*>q;
    print_left_view(root,q);
}
int main(int argc,const char* argv[]){
    string arr[200];
    int k=0;
    for(int i=1;i<argc;i++){
        arr[k++]=argv[i];
    }
    Node* root;
    root=construct_binary_tree(root,0,k,arr);
    print_left(root);
    return 0;
}
