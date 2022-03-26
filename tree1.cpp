#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    void dfs(TreeNode *node, vector<int> &preorder) {
        if(node == NULL) return; 
        
        preorder.push_back(node->val); 
        dfs(node->left, preorder); 
        dfs(node->right, preorder); 
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        dfs(root, preorder);
        return preorder; 
    }
};

void preorder(node){
    if (node==null)
        return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);

}
class Solution {
private:
    void dfs(TreeNode *node, vector<int> &inorder) {
        if(node == NULL) return; 
        
        dfs(node->left, inorder); 
        inorder.push_back(node->val); 
        dfs(node->right, inorder); 
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        dfs(root, inorder);
        return inorder; 
    }
};
class Solution {
    private:
    void dfs(TreeNode *node, vector<int> &postorder) {
        if(node == NULL) return; 
        
        dfs(node->left, postorder); 
        dfs(node->right, postorder); 
        postorder.push_back(node->val); 
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        dfs(root, postorder);
        return postorder; 
    }
};
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; 
        if(root == NULL) return ans; 
        queue<TreeNode*> q; 
        q.push(root); 
        while(!q.empty()) {
            int size = q.size();
            vector<int> level; 
            for(int i = 0;i<size;i++) {
                TreeNode *node = q.front(); 
                q.pop(); 
                if(node->left != NULL) q.push(node->left); 
                if(node->right != NULL) q.push(node->right); 
                level.push_back(node->val); 
            }
            ans.push_back(level); 
        }
        return ans; 
    }
};