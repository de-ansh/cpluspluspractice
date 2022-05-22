#include"TreeNode.h"
#include<bits/stdc++.h>
using namespace std;
TreeNode <int> *takeinput(){
	int rootData;
	cout<<"Enter Data"<<endl;
	cin>>rootData;
	TreeNode<int>* root=new TreeNode<int> (rootData);
	int n;
	cout<<"enter the number of child of "<<rootData<<endl;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		TreeNode<int>*child=takeinput();
		root->children.push_back(child);
	}
	return root;
}
void printTree(TreeNode<int>*root){
	if (root==NULL)
	{
		return;
	}
	cout<<root->data<<": ";
	for (int i = 0; i < root->children.size(); ++i)
	{
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for (int i = 0; i < root->children.size(); ++i)
	{
		printTree(root->children[i]);
	}
}
int main(){
	/*TreeNode<int> *root= new TreeNode<int>(1);
	TreeNode<int> *node1= new TreeNode<int>(2);
	TreeNode<int> *node2= new TreeNode<int>(45);
	root->children.push_back(node1);
	root->children.push_back(node2);*/
	TreeNode<int>*root=takeinput();
	printTree(root);

}