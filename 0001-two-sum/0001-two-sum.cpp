class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 1; i + j < nums.size(); j++) { // Corrected inner loop condition
                int dk = 0;
                dk = nums[i] + nums[i + j];
                if(dk == target) {
                    a.push_back(i);
                    a.push_back(i + j);
                    break;
                }
            }
        }
        return a;
    }
};
