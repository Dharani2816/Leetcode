class Solution {
public:
    int addDigits(int num) {
        int sum;
        while(1){
             sum = 0;
            int num1 = num;
            while(num1 != 0){
                sum += num1 % 10;
                num1 /= 10;
            }
            if((sum / 10) < 1){
                break;
            }
            else{
                num = sum;
            }
        }
        return sum;
    }
};