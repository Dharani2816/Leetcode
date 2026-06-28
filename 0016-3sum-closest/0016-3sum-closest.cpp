class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        // -4 -1 1 2
        int sum = INT_MAX;
        for (int i = 0; i < nums.size() - 2; i++) {
            int complement = target - nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            long long sum1 = INT_MAX;
            while (left < right) {
                if (nums[left] + nums[right] < complement) {
                    long long a = abs(target - sum1);
                    long long b =
                        abs(target - (nums[i] + nums[left] + nums[right]));
                    if (b < a) {
                        sum1 = nums[i] + nums[left] + nums[right];
                    }
                    left++;
                } else if (nums[left] + nums[right] > complement) {
                    long long a = abs(target - sum1);
                    long long b =
                        abs(target - (nums[i] + nums[left] + nums[right]));
                    if (b < a) {
                        sum1 = nums[i] + nums[left] + nums[right];
                    }
                    right--;
                } else {
                    long long a = abs(target - sum1);
                    long long b =
                        abs(target - (nums[i] + nums[left] + nums[right]));
                    if (b < a) {
                        sum1 = nums[i] + nums[left] + nums[right];
                    }
                    break;
                }
            }
            long long a = abs(target - sum1);
            long long b = abs(target - (long long)sum);
            if (a < b)
                sum = sum1;
        }
        return sum;
    }
};