class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //moores voting algorithm instead of using a single candidate like in maj element 1 we use two candidates as there is possibility of two elements appearing more than n/3 times 
        int candidate1 = INT_MIN,candidate2 = INT_MIN;
        int count1 = 0,count2 = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(count1 == 0 && nums[i]!=candidate2){
                candidate1 = nums[i]; count1 = 1;continue;
            }
            else if(count2 == 0 && nums[i]!=candidate1){
                candidate2 = nums[i]; count2 = 1;continue;
            }
            if(nums[i] == candidate1){
                count1++;
            }
            else if(nums[i] == candidate2){
                count2++;
            }
            else {
                count1--;count2--;
            }
            
        }
        vector<int>result; int freq1 = 0,freq2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == candidate1) freq1++;
            if(nums[i] == candidate2) freq2++;
        }
        if(freq1 > (n/3)) result.push_back(candidate1);
        if(freq2 > (n/3)) result.push_back(candidate2);
        return result;
    }
};