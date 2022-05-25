#include <bits/stdc++.h>
using namespace std;
class Solution{
	vector<vector<int>>(TreeNode *root){
		vector<vector<int>>ans;
		if(root==NULL) return ans;
		queue<TreeNode*> q;
		q.push(root);
		while(!q.empty()){
			int size=q.size();
			vector<int>level;
			for(int i=0;i<size;i++){
				TreeNode*node=q.front();
				q.pop();
				if(node->left!=null) q.push(node->left);
				if(node->right!=null) q.push(node->right);
				level.push_back(node->val);
			}
			ans.push_back(level);
		}
		return ans;
	}
};