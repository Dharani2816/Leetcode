class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double maxSum = 0.0;
      int start = 0;
      int end = -1;
      double avg = 0.0;
        for(int i=0;i<k;i++){
            maxSum+=nums[i];
            end++;
        }
        double sum = maxSum;
        while(end < nums.size()-1){
            end++;
            sum = sum + nums[end] - nums[start];
            start++;
            maxSum = max(maxSum,sum);
        }
        return (maxSum / (double)k);
    }
};