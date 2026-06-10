class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        else if(n == 2){
            return 1;
        }
        int target = n-1;
        int minJumps = 0;
        while(target > 0){
            int i = 0;
            for(;i<target;i++){
                if(nums[i]+i >= target){
                    minJumps++;
                    break;
                }
            }
            target = i;
        }
        return minJumps;
    }
};