class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(freq[nums[i]] > freq[nums[j]]){
                    swap(nums[i],nums[j]);
                }
                else if(freq[nums[i]] == freq[nums[j]]){
                    if(nums[i] < nums[j]){
                        swap(nums[i],nums[j]);
                    }
                }
            }
        }
        return nums;
    }
};