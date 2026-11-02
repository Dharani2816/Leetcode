class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            ans+=abs(nums[n/2] - nums[i]);
        }
        return ans;
    }
};