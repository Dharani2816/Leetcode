class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long repeating = -1,missing = -1;
        //can be solved using basic math (s1 = sum of  nums) - (s1n = sum of 1 to n) = x-y and (s2 = sum of square of nums) - (s2n = summ of sq of 1 to n) = x2 - y2;
        long long n = nums.size();
        long long s1=0,s2=0;
        long long s1n = (n * (n+1)) / 2;
        long long s2n = (n* (n+1) * (2*n+1))/6;
        for(int i=0;i<nums.size();i++){
            s1 += nums[i];
            s2 += nums[i] * nums[i];
        }
        long long val1 = s1 - s1n; //value of x-y
        long long val2 = (s2 - s2n)/val1; // value of x+y x->repeating y->missing
        repeating = (val1+val2)/2;
        missing = repeating - val1;
        return {(int)repeating,(int)missing};
    }
};