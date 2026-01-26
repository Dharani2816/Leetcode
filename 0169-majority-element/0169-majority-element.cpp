class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //    sort(nums.begin(),nums.end());
    //    int maxCount = 0;
  int n= nums.size();
    //    int element;
    //    for(int i=0;i<nums.size();i++){
    //     maxCount++;
    //     if(maxCount > n /2){
    //         element = nums[i];
    //     }
    //     if(i!=n-1 && nums[i] != nums[i+1]){
    //         maxCount = 0;
    //     }
    //    }
    //    if(maxCount > n /2){
    //         element = nums[n-1];
    //     }
    //    return element;
    unordered_map<int,int>freq;
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
        if(freq[nums[i]] > n/2){
            return nums[i];
        }
    }
    return -1;
    }
};