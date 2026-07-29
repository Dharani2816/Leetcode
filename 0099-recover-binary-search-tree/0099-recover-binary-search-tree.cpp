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
    void inorder(TreeNode* root,vector<TreeNode*>&dfs){
        if(!root) return;
        inorder(root->left,dfs);
        dfs.push_back(root);
        inorder(root->right,dfs);
        return;
    }
    bool isSorted(vector<TreeNode*>&dfs){
      for(int i=0;i<dfs.size()-1;i++){
            if(dfs[i]->val > dfs[i+1]->val){
                return false;
            }
      }
      return true;
    }
    void recoverTree(TreeNode* root) {
        vector<TreeNode*>dfs;
        inorder(root,dfs);
        for(int i=0;i<dfs.size();i++){
            for(int j=i+1;j<dfs.size();j++){
                int temp = dfs[i]->val;
                dfs[i]->val = dfs[j]->val;
                dfs[j]->val = temp;
                if(isSorted(dfs)){
                    return;
                }
                 temp = dfs[i]->val;
                dfs[i]->val = dfs[j]->val;
                dfs[j]->val = temp;
            }
        }
        return;
    }
};