class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int shortDis = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                if(abs(i-start) < shortDis){
                    shortDis = abs(i-start);
                }
            }
        }
        return shortDis;
    }
};