#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node *left;
	Node *right;
	Node(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
	
};


Node *build(){
 	int data;
 	cin>>data;
 	if(data== -1) return NULL;
 	Node *root= new Node(data);
 	root->left=build();
 	root->right=build();
 	return root;
 }

 void preorder(Node *root){
 	if(root== NULL) return;
 	cout<<root->data<<" ";
 	preorder(root->left);
 	preorder(root->right);
 }

 void postorder(Node *root){
 	if(root== NULL) return;
 	postorder(root->left);
 	postorder(root->right);
 	cout<<root->data<<" ";
 }
 void inorder(Node *root){
 	if(root== NULL) return;
 	inorder(root->left);
 	cout<<root->data<<" ";
 	inorder(root->right);
 }
 int main(int argc, char const *argv[])
 {
 	Node *root=build();
 	preorder(root);
 	cout<<endl;
 	postorder(root);
 	cout<<endl;
 	inorder(root);
 	cout<<endl;
 	return 0;
 }