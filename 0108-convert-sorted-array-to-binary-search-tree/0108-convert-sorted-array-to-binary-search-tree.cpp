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
    void insert(TreeNode*&root,int val){
        TreeNode* node = new TreeNode(val);
        if(!root){
            root = node; return;
        }
        TreeNode* parent = nullptr;
        TreeNode* temp = root;
        while(temp){
            if(val < temp->val){
                parent = temp;
                temp = temp->left;
            }
            else if(val > temp->val){
                parent = temp;
                temp = temp->right;
            }
        }
        if(parent){
            if(val < parent->val) parent->left = node;
            else parent->right = node;
        }
    }
    void insertAll(TreeNode*&root,vector<int>&nums,int left,int right){
        if(left > right) return;
        int mid = (left+right)/2;
        insert(root,nums[mid]);
        insertAll(root,nums,left,mid-1);
        insertAll(root,nums,mid+1,right);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = nullptr;
        insertAll(root,nums,0,nums.size()-1);
        return root;
    }
};