class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            auto it = find(nums.begin(),nums.end(),target - nums[i]);
            if(it != nums.end()){
                int idx  = it-nums.begin();
                if(idx != i){
                res.push_back(i);
                res.push_back(idx);
                break;
                }
            }
        }
        return res;
    }
};