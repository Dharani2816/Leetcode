class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>mp; int count = 0;
        for(int i=0;i<nums.size();i++){
            int a1 = nums[i] - k;
            int a2 = nums[i] + k;
            if(mp.contains(a1)) count+= mp[a1];
            if(mp.contains(a2)) count+=mp[a2];
            mp[nums[i]]++;
        }
        return count;   
    }
};