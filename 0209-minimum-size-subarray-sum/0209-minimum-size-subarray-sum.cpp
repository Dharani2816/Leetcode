class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int minLen = nums.size()+1;
        int left = 0;
        int right = 0;
        while(left < nums.size() && right <= nums.size()){  
            if(sum < target){
                if(right < nums.size())
                    sum+= nums[right];
                right++;
            }
            else{
                int len = right - left;
                minLen = min(minLen,len);
                sum -= nums[left];
                left++;
            }
            //cout<<left<<right<<endl;
        }
        return minLen == nums.size()+1?0:minLen;
    }
};