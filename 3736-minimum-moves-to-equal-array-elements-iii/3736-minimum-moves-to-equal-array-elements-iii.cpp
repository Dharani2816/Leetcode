class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxElement = INT_MIN;
        for(int num:nums) maxElement = max(maxElement,num);
        int minMoves = 0;
        for(int num:nums) minMoves += (maxElement - num);
        return minMoves;
    }
};