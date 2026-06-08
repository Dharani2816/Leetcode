class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
           unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] < freq[b]) {
                return true;
            } else if (freq[a] > freq[b]) {
                return false;
            }
            else{
            if (a <= b) {
                return false;
            } else {
                return true;
            }
            }
        });
        return nums;
    }
};