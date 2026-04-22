/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> dfs;
    void inorder(TreeNode* root) {
        if (root) {
            inorder(root->left);
            dfs.push_back(root->val);
            inorder(root->right);
        }
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        int maxFreq = 0;
        int freq = 0;
        int curr = dfs[0], prev = dfs[0];
        for(int i:dfs){
            cout<<i<<endl;
        }
        vector<int> res;
        for (int i = 0; i < dfs.size(); i++) {
            curr = dfs[i];
            if (prev != curr) {
                if (freq > maxFreq) {
                    res.clear();
                    res.push_back(prev);
                    maxFreq = freq;
                } else if (freq == maxFreq) {
                    res.push_back(prev);
                }
                freq = 0;
            }
            freq++;
            prev = curr;
        }
        if (freq > maxFreq) {
            res.clear();
            res.push_back(prev);
        } else if (freq == maxFreq) {
            res.push_back(prev);
        }
        return res;
    }
};