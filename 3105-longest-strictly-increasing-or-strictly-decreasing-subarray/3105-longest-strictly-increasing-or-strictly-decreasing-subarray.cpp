class Solution {
public:
    bool isIncreasing(vector<int>&nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] >= nums[i+1]){
                return false;
            }
        }
        return true;
    }
    bool isDecreasing(vector<int>&nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] <= nums[i+1]){
                return false;
            }
        }
        return true;
    }
    bool isGood(vector<int>&nums){
        return (isIncreasing(nums) || isDecreasing(nums) );
    }
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxLen = INT_MIN;
        for(int i=0;i<nums.size();i++){
            vector<int>a;
            for(int j=i;j<nums.size();j++){
                a.push_back(nums[j]);
                if(isGood(a)){
                    maxLen = max(maxLen,(int)a.size());
                }
            }
        }
        return maxLen;
    }
};