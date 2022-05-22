#include"TreeNode.h"
#include<bits/stdc++.h>
using namespace std;
void printTree(TreeNode<int>*root){
	cout<<root->data<<endl;
	for (int i = 0; i < root->children.size(); ++i)
	{
		printTree(root->children[i]);
	}
}
int main(){
	TreeNode<int> *root= new TreeNode<int>(1);
	TreeNode<int> *node1= new TreeNode<int>(2);
	TreeNode<int> *node2= new TreeNode<int>(45);
	root->children.push_back(node1);
	root->children.push_back(node2);
	printTree(root);

}