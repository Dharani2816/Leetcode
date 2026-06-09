class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1){
            return true;
        }
        int target = nums.size()-1;
        int i = nums.size()-2;
        while(i>=0){
            if(nums[i] >= (target-i)){
                target = i;
                if(target == 0){
                    return true;
                }
                i--;
            }
            else{
                i--;
            }
        }
        return false;
    }
};