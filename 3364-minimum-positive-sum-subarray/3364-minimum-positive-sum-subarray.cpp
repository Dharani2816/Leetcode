class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = -1;
        for (int i = l; i <= r; i++) {
            int sum = 0;
            int left = 0, right = 0;
            for (; right < i; right++) {
                sum += nums[right];
            }
            if (sum > 0) {
                if (ans == -1)
                    ans = sum;
                else
                    ans = min(ans, sum);
            }
            for (right = i; right < nums.size(); right++) {
                sum += nums[right];
                sum -= nums[left];
                left++;
                if (sum > 0) {
                    if (ans == -1)
                        ans = sum;
                    else
                        ans = min(ans, sum);
                }
            }
        }
        return ans;
    }
};