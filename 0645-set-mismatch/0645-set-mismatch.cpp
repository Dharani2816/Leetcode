class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int repeated = 1,missing=1;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i+1] - nums[i] == 0){
                repeated = nums[i];
            }
            else if(nums[i+1] - nums[i] > 1){
                missing = nums[i]+1;
            }
        }
        if(n != nums[n-1]) missing = n;
       return {repeated,missing};
    }
};