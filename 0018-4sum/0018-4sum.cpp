class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
               long long complement = target - nums[i];
               complement -= nums[j];
                int left = j + 1, right = nums.size() - 1;
                while (left < right) {
                    if (nums[left] + nums[right] < complement) {
                        left++;
                    } else if (nums[left] + nums[right] > complement) {
                        right--;
                    } else {
                        result.insert(
                            {nums[i], nums[j], nums[left], nums[right]});
                        left++;
                    }
                }
            }
        }
        vector<vector<int>>res(result.begin(),result.end());
        return res;
    }
};