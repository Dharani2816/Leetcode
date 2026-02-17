class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int>nums1(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            nums1[(i+k)%nums.size()] = nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = nums1[i];
        }
    }
};