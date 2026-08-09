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
    void insertAll(TreeNode*&root,vector<int>&nums){
        if(nums.size() == 0) return;
        int mid = nums.size()/2;
        insert(root,nums[mid]);
        vector<int>n1(nums.begin(),nums.begin()+mid);
        vector<int>n2(nums.begin()+(mid+1),nums.end());
        insertAll(root,n1);
        insertAll(root,n2);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = nullptr;
        insertAll(root,nums);
        return root;
    }
};