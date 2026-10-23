#include<iostream>
using namespace std;
class node{
 public:
 	node* left;
 	node* right;
 	int data;
 	
 	node(int value){
 		data=value;
 		left=nullptr;
 		right=nullptr;
 	}
};
class binary_tree{
public:	
	node*root;
	binary_tree(){
		root=nullptr;
		}
	void pre_order(node* root){
		if(root==nullptr)
		{return ;}
		
		cout<<"<<"<<root->data;
		pre_order(root->left);
		pre_order(root->right);
		
		}		
		
		
};

int main(){
	binary_tree tree;
	tree.root=new node(10);
	tree.root->left=new node(5);
	tree.root->right= new node(20);
	
	tree.pre_order(tree.root);
	return 0;
}