class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        long long overallSum = 0;
        long long sum = 0;
        for(int i=0;i<arr.size();i++){
            sum = 0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                if((j-i+1) & 1){
                    overallSum += sum;
                }
            }
        }
        return (int)overallSum;
    }
};