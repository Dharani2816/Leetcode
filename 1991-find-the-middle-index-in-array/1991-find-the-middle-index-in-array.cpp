class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int middleIndex = -1;
        int rightSum = 0,leftSum = 0;
        for(int i=0;i<nums.size();i++){
            rightSum += nums[i];
        }
        for(int i=0;i<nums.size();i++){
            rightSum -= nums[i];
            if(leftSum == rightSum){
                middleIndex = i;
                break;
            }
            leftSum+=nums[i];
        }
        return middleIndex;
    }
};