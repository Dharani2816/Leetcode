class Solution {
public:
    void subsets(int index,unordered_map<int,int>&mp,vector<int>& nums, int k,int&count){
        if(index>=nums.size()){ 
            count++;
            return;
        }
        if(mp.contains(nums[index] - k) || mp.contains(k+nums[index])){
            subsets(index+1,mp,nums,k,count);
        }
        else{
            mp[nums[index]]++;
            subsets(index+1,mp,nums,k,count);
            mp[nums[index]]--;
            if(mp[nums[index]] == 0)
                mp.erase(nums[index]);
            subsets(index+1,mp,nums,k,count);
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int>mp;
        subsets(0,mp,nums,k,count);
        return count-1;
    }
};