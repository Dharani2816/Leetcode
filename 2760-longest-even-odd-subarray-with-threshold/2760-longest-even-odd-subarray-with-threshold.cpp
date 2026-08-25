class Solution {
public:
    bool isGood(vector<int>&nums,int left,int right,int threshold){
        if(nums[left]%2 != 0) return false;
        for(int i=left;i<right;i++){
            if(nums[i]%2 == nums[i+1]%2) return false;
        }
        for(int i=left;i<=right;i++){
            if(nums[i] > threshold) return false;
        }
        return true;
    }
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int left = 0,right;
        int result = 0;
        vector<int>a;
        for(right=0;right<nums.size();right++){
            if(left <= right && !isGood(nums,left,right,threshold)){
                left++;
            }
            result = max(result,(right-left+1));
        }
        return result;
    }
};