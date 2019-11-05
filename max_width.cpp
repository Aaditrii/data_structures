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
void max_width(node* root);
int height(node* root);
int get_Width(node* root,int level);
void max_width(node* root){
	int maxm_width=0,width;
	if(root==NULL)
		return;
	else{
		int h=height(root);
		for(int i=1;i<=h;i++){
			width=get_Width(root,i);
			if(maxm_width<width)
				maxm_width=width;
		}

	}
	cout<<maxm_width;
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
int get_Width(node* root,int level){
	if(root==NULL)
		return 0;
	if(level==1)
		return 1;
	if(level>1){
		return get_Width(root->next[0],level-1)+get_Width(root->next[1],level-1);
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
	max_width(root);
	return 0;
}

