class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count;
        int i;
        for( i=0;i<nums.size();i++){
            count =0;
              for(int j=0;j<nums.size();j++){
                if(nums[i] == nums[j]) count++;
              }
              if(count > nums.size()/2) break;
        }
        return nums[i];
    }
};