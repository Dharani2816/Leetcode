class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        for(int i=0;i<nums.size();i++){
            maxOr = maxOr | nums[i];
        }
        int n = nums.size();int count = 0;
        for(int i=0;i<(1 << n);i++){
            vector<int>nums1;
            for(int j=0;j<n;j++){
                if(i & (1 << j)){
                    nums1.push_back(nums[j]);
                }
            }
            int a = 0;
            for(int k=0;k<nums1.size();k++) a = a | nums1[k];
            if(a == maxOr){
                count++;
            }
        }
        return count;
    }
};