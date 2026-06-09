class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0;
        while(i<nums.size() && k > 0){
            if(nums[i] < 0){
                nums[i] = nums[i] * -1;
                k--;
                i++;
            }
            else break;
        }
        if(k > 0){
        sort(nums.begin(),nums.end());
            if(k%2 != 0){
                for(int j=0;j<k;j++){
                    nums[0] = nums[0]*-1;
                }
            }
        }
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
};