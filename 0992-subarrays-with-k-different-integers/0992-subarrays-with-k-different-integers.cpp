class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int count1 = 0;
        unordered_map<int,int>hash;
        int left = 0;
        for(int right = 0;right<nums.size();right++){
            hash[nums[right]]++;
            while(left <= right && hash.size() > k){
                hash[nums[left]]--;
                if(hash[nums[left]] == 0){
                    hash.erase(nums[left]);
                }
                left++;
            }
            count1 += (right-left)+1;
        }
        int count2 = 0;
        hash.clear();
        left = 0;
        for(int right = 0;right<nums.size();right++){
            hash[nums[right]]++;
            while(left <= right && hash.size() >= k){
                hash[nums[left]]--;
                if(hash[nums[left]] == 0){
                    hash.erase(nums[left]);
                }
                left++;
            }
            count2 += (right-left)+1;
        }
        return (count1-count2);
    }
};