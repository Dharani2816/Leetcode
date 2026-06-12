class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0,right = 0;int currLen;
        int maxLen = 0;int n = nums.size();int zeros = 0;
        bool visited[n];
        for(int i=0;i<n;i++){
            visited[i] = false;
        }
        while(right < n && left<=right){
            if(!visited[right] && nums[right] == 0){
                visited[right] = true;
                zeros++;
            }
            if(zeros <= k){
                currLen = right-left+1;
                maxLen = max(currLen,maxLen);
                right++;
            }
            else{
               zeros--;int i;
               for( i=left;i<right;i++){
                    if(nums[i] == 0){
                        break;
                    }
               }
               left = i+1;
               if(left > right){
                right = left;
               }
            }
        }
        return maxLen;
    }
};