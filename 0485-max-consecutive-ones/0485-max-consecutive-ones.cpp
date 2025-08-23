class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int flag = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                count++;
            }
            if(nums[i] != 1 || i == n -1){
               if(count > flag ){
                 flag = count;
               }
               count = 0;
            }
        }
        return flag;
    }
};