#include<iostream>
#include<cstdlib>
using namespace std;
class node{
	public:
		string data;
		node* next[2];
		node(string data){
			this->data=data;
			next[0]=next[1]=NULL;
		}
};
void print_level_order(node* root);
int height(node* root);
void print_given_level(node* root,int level,bool val);
void print_level_order(node* root){
	bool val=false;
	if(root==NULL)
		return;
	else{
		int h=height(root);
		for(int i=1;i<=h;i++){
			print_given_level(root,i,val);
			val=!val;
		}
	}
}
int height(node* root){
	if(root==NULL)
		return 0;
	else{
		int ldepth=height(root->next[0]);
		int rdepth=height(root->next[1]);
		if(ldepth>rdepth)
			return ldepth+1;
		else
			return rdepth+1;
	}
}
void print_given_level(node* root,int level,bool val){
	if(root==NULL)
		return;
	if(level==1)
		cout<<root->data<<" ";
	if(level>1){
		if(val==false){
		print_given_level(root->next[1],level-1,val);
		print_given_level(root->next[0],level-1,val);
		}
		else{
			print_given_level(root->next[0],level-1,val);
			print_given_level(root->next[1],level-1,val);
		}
	}
}
node* construct_binary_tree(node* root,int k,int i,string arr[100]){
	if(i<k){
		node* new_node=new node(arr[i]);
		root=new_node;
		if(arr[2*i+1]!="_")
			root->next[0]=construct_binary_tree(root->next[0],k,2*i+1,arr);
		if(arr[2*i+2]!="_")
			root->next[1]=construct_binary_tree(root->next[1],k,2*i+2,arr);
	}
	return root;
}
int main(int argc,const char * argv[]){
	string arr[100];
	int k=0;
	for(int i=1;i<argc;i++)
		arr[k++]=argv[i];
	node* root;
	root=construct_binary_tree(root,k,0,arr);
	print_level_order(root);
	return 0;
}
