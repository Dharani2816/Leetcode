class Solution {
public:
    int arrangeCoins(int n) {
        int row = 0; int i = 1;
        n = n - i;
        while(n >= 0){
            row++;
            i++;
            n = n - i;
        }
        return row;
    }
};