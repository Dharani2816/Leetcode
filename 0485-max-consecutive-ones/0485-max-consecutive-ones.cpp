class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                ans.push_back(count);
                count = 0;
            }
        }
        ans.push_back(count);
        auto it = max_element(ans.begin(),ans.end());
        return *it;
    }
};