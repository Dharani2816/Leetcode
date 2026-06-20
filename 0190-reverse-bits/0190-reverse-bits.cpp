class Solution {
public:
    int reverseBits(int n) {
        int sum = 0;
        for(int i=31;i>=0;i--){
            if(n & 1) sum+=pow(2,i);
            n = n >> 1;
        }
        return sum;
    }
};