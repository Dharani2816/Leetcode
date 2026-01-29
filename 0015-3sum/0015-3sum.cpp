class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>res;
        for(int i=0;i<nums.size()-1;i++){
            int target = -1*nums[i];
            int left = i+1;
            int right = nums.size()-1;
            while(left < right){
                if(nums[left]+nums[right] == target){
                    res.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(nums[left]+nums[right] < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        vector<vector<int>>result(res.begin(),res.end());
        return result;
    }
};