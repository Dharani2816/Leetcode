class Solution {
public:
    int digitSum(string s){
        int ans = 0;
        for(int i=0;i<s.size();i++){
            ans+=(s[i]-'0');
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(digitSum(to_string(nums[i])) == i) return i;
        }
        return -1;
    }
};