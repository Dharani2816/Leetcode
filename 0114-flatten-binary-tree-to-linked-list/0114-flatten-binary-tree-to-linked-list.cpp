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
public:
    void preorder(TreeNode* root,vector<TreeNode*>&dfs){
        if(!root) return;
        dfs.push_back(root);
        preorder(root->left,dfs);
        preorder(root->right,dfs);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*>dfs;
        if(!root) return;
        preorder(root,dfs);
        for(int i=0;i<dfs.size()-1;i++){
            dfs[i]->left = nullptr;
            dfs[i]->right = dfs[i+1];
        }
        dfs[dfs.size()-1]->left = nullptr;
        dfs[dfs.size()-1]->right = nullptr;
    }
};