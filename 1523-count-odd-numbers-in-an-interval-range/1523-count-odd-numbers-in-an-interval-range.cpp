class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        if(high & 1) count++;
        int num1 = low >> 1;
        int num2 = high >> 1;
        count += (num2 - num1);
        return count;
    }
};