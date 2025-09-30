class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int right = 0;
      int left = nums.size() - 1;
      vector<int>res;
      while(1){
        if(left <= right){
            right++;
            left = nums.size() - 1;
        }
        if(nums[left]+nums[right] == target){
            res.push_back(left);
            res.push_back(right);
            break;
        }
        else{
            left--;
        }
      }
      return res;
    }
};