class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans = 1;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans = max(ans,1-sum);
        }
        return ans;
    }
};