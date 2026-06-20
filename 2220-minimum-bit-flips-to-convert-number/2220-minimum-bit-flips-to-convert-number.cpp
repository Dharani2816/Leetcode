class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num = start ^ goal;
        int setBits = 0;
        while(num != 0){
            setBits+=(num&1);
            num = num >> 1;
        }
        return setBits;
    }
};