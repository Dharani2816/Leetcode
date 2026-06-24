class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        int prev = INT_MIN;
        for(int i=0;i<nums.size()-2;i++){
            if(prev == nums[i]) continue;
            int target = -1*nums[i];
            int left = i+1;
            int right = nums.size()-1;
            int leftPrev,rightPrev;
            while(left < right){
                if(nums[left]+nums[right] == target){
                    result.push_back({nums[i],nums[left],nums[right]});
                   leftPrev = nums[left],rightPrev = nums[right];
                   while(left < nums.size() && leftPrev == nums[left]){
                    left++;
                   }
                   while(right >= i && rightPrev == nums[right]){
                    right--;
                   }
                }
                else if(nums[left]+nums[right] < target){
                    left++;
                }
                else{
                    right--;
                }
            }
            prev = nums[i];
        }
        return result;
    }
};