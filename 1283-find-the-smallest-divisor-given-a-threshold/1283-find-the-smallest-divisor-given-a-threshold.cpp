class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = 0;
        for(int i=0;i<nums.size();i++){
            right = max(right,nums[i]);
        }
        int answer;
        while(left <= right){
            int mid = (left+(right-left)/2);
            int sum = 0;
            for(int i=0;i<nums.size();i++){
                int c = (nums[i]+mid-1)/mid;
                sum+=c;
            }
            if(sum > threshold){
                left = mid+1;
            }
            else{
                answer = mid;
                right = mid-1;
            }
        }
        return answer;
    }
};