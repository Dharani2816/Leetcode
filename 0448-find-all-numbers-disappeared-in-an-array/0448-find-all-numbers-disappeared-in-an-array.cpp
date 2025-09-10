class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     set<int>nums1(nums.begin(),nums.end());
     vector<int>res;
     for(int i=0;i<nums.size();i++){
        if(!nums1.count(i+1)){
            res.push_back(i+1);
        }
     }
     return res;
    }
};