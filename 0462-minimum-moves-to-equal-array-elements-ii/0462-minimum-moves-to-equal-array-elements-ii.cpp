class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long minMoves = INT_MAX;
        for(int i=0;i<nums.size();i++){
            long long noOfMoves = 0;
            for(int j=0;j<nums.size();j++){
                noOfMoves+=abs(nums[i]-nums[j]);
            }
            minMoves = min(minMoves,noOfMoves);
        }
        return (int)minMoves;
    }
};