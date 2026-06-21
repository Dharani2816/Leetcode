class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moores voting algortihm freq of element appearing more than n/2 times wont be canclled out this is the basic intuition
        int element = nums[0],freq = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == element) freq++;
            else freq--;
            if(freq == 0){
                if(i != nums.size()-1){
                    element = nums[i+1];
                }
            }
        }
        return element; //since majority always exist
    }
};