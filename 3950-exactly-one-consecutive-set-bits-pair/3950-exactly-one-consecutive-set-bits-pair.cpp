class Solution {
public:
    bool consecutiveSetBits(int n) {
       int flag = 0;
       int prev = 0,curr;
       while(n != 0){
        curr = n % 2;
        if(prev == 1 && curr == 1) flag++;
        prev = curr;
        n /= 2;
       }
       return flag == 1;
    }
};