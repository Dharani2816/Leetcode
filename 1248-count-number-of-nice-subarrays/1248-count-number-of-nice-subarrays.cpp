class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count1 = 0;
        int left = 0;
        int odd = 0;
        for(int right=0;right<nums.size();right++){
            if(nums[right] & 1) odd++;
            while(left <= right && odd >= k){
                if(nums[left] & 1) odd--;
                left++;
            }
            count1+=(right-left)+1;
        }
        int count2 = 0; odd = 0,left = 0;
        for(int right=0;right<nums.size();right++){
            if(nums[right] & 1) odd++;
            while(left <= right && odd > k){
                if(nums[left] & 1) odd--;
                left++;
            }
            count2+=(right-left)+1;
        }
        return (count2-count1);
    }
};