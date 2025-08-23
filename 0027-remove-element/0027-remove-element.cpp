class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n = nums.size();
        int count = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] != val){
                count++;
            }
        }

        for(int i=nums.size() - 1;i>=0;i--){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
            }
        }
      

       return count++;
    }
};