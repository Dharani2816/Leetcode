class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        unordered_map<int, int> freq;
        unordered_map<int,bool>isPushed;
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] > n / 3 && !isPushed[nums[i]]) {
                result.push_back(nums[i]);
                isPushed[nums[i]] = true;
            }
        }
        return result;
    }
};