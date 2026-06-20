class Solution {
public:
    int findComplement(int num) {
        int num1 = 0;
        int i = 0;
        while(num != 0){
            if((num & 1 )== 0) num1 = num1 | (1 << i);
            num = num >> 1;
            i++;
        }
        return num1;
    }
};