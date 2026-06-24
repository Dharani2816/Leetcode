class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int prevI = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] == prevI) continue;
            int prevJ = INT_MIN;
            for (int j = i + 1; j < nums.size(); j++) {
                if(nums[j] == prevJ) continue;
                long long complement = target - nums[i];
                complement -= nums[j];
                int left = j + 1, right = nums.size() - 1;
                while (left < right) {
                    if (nums[left] + nums[right] < complement) {
                        left++;
                    } else if (nums[left] + nums[right] > complement) {
                        right--;
                    } else {
                        result.push_back(
                            {nums[i], nums[j], nums[left], nums[right]});
                        int prevLeft = nums[left];
                        int prevRight = nums[right];
                        while (left < nums.size() && nums[left] == prevLeft) {
                            left++;
                        }
                        while (right >= j && nums[right] == prevRight) {
                            right--;
                        }
                    }
                }
                prevJ = nums[j];
            }
            prevI = nums[i];
        }
        return result;
    }
};