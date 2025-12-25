class Solution {
public:
    int squared(int num){
        int num1 = 0;
        while(num != 0){
           num1 += pow((num % 10),2);
           num /= 10;
        }
        return num1;
    }
    bool isHappy(int n) {
        if(n == 1){
            return true;
        }
        map<int,int>m;
        while(1){
            m[n] = 1;
            n = squared(n);
            if(m[n] == 1){
                return false;
            }
            if(n == 1){
                return true;
            }
        }
        return false;
    }
};