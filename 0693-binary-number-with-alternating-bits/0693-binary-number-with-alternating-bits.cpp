class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool result = true;
        int prev = (n&1);
        n = n >> 1;
        if(n == 0){
            return result;
        }
        while(n != 0){
            int c = (n & 1);
            if(c ^ prev == 0){
                result = false;
            }
            prev = c;
            n = n >> 1;
        }
        return result;
    }
};