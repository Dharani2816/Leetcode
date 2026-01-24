class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minNo = nums[0];
        int maxNo = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i] > maxNo){
                maxNo = nums[i];
            }
            if(nums[i] < minNo){
                minNo = nums[i];
            }
        }
        int gcd;
        for(int i=minNo;i>=1;i--){
            if(minNo%i == 0 && maxNo%i == 0){
                gcd = i;
                break;
            }
        }
        return gcd;
    }
};