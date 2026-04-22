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
    map<int,int>freq; 
    void dfs(TreeNode* root){
        if(root){
            freq[root->val]++;
            dfs(root->left);
            dfs(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
       dfs(root);
       int maxFreq = 0;
       for(auto it = freq.begin();it!=freq.end();it++){
            if(it->second > maxFreq){
                maxFreq = it->second;
            }
       }
       vector<int>res;
       for(auto it = freq.begin();it!=freq.end();it++){
            if(it->second == maxFreq){
                res.push_back(it->first);
            }
       }
       return res;
    }
};