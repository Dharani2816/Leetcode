class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int rightSum = 0;
        for(int i=nums.size()-1;i>=0;i--){
            sum-=nums[i];
            if(sum == rightSum){
                return i;
            }
            rightSum += nums[i];
        }
        return -1;
    }
};