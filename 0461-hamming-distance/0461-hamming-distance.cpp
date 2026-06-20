class Solution {
public:
    int hammingDistance(int x, int y) {
        //doing bitwise xor makes 1 at bit positions where bits are different then no of set bits in that xor gives answer
        int z = x ^ y;
        int setBits =  0;
        while(z != 0){
            setBits += (z & 1);
            z = z >> 1;
        }
        return setBits;
    }
};