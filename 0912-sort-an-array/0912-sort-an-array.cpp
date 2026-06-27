class Solution {
public:
    void merge(vector<int>& nums, int left, int right, int mid) {
        int i = left, j = mid + 1;
        vector<int> res(right - left + 1);
        int k = 0;
        while (i <= mid && j <= right) {
            if (nums[i] < nums[j]) {
                res[k++] = nums[i++];
            } else {
                res[k++] = nums[j++];
            }
        }
        while (i <= mid)
            res[k++] = nums[i++];
        while (j <= right) {
            res[k++] = nums[j++];
        }
        k = 0;
        for (int i = left; i <= right; i++) {
            nums[i] = res[k++];
        }
    }
    void mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) {
            return;
        }
        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, right, mid);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};