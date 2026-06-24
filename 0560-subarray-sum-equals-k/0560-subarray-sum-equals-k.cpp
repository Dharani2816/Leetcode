class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>sum;
        int prefixSum = 0;
        sum[0]++;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            //check if there is a subarray that has sum prefixSum - k if it is there find its count then it means that there count subarrays with sum = k that ends at index i;
            if(sum[prefixSum - k]){
                count+=sum[prefixSum - k];
            }
            sum[prefixSum]++;
        }
        return count;
    }
};