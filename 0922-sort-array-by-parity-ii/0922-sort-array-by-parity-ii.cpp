class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>nums1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                nums1.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 != 0){
                nums1.push_back(nums[i]);
            }
        }
        int even = 0;
        int odd = nums.size()/2;
        for(int i=0;i<nums.size();i++){
            if(i%2 == 0){
                nums[i] = nums1[even++];
            }
            else{
                 nums[i] = nums1[odd++];
            }
        }
        return nums;
    }
};