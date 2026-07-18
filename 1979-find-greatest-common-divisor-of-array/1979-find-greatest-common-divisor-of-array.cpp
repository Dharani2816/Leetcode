class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minElement = INT_MAX;
        int maxElement = INT_MIN;
        for(int i=0;i<nums.size();i++){
            minElement = min(minElement,nums[i]);
            maxElement = max(maxElement,nums[i]);
        }
        int gcd = 1;
        for(int i=minElement;i>=1;i--){
            if(minElement%i == 0 && maxElement%i == 0){
                gcd = i;
                break;
            }
        }
        return gcd;
    }
};