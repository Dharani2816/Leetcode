class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        vector<int>num;
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]] = 0;
        }
        for(int i=0;i<nums.size();i++){
            if(a[target-nums[i]] == 1){
                num.push_back(target-nums[i]);
                num.push_back(nums[i]);
                break;
            }
            a[nums[i]] = 1;
        }
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(num[j] == nums[i]){
                res.push_back(i);
                j++;
            }
            if(j == 2){
                break;
            }
        }
        return res;
    }
};