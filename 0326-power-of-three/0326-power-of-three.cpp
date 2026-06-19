class Solution {
public:
    bool isPower(int i,int n){
        if(pow(3,i) >= n){
            if(pow(3,i) > n) return false;
            return true;
        }
        return isPower(i+1,n);
    }
    bool isPowerOfThree(int n) {
        return isPower(0,n);
    }
};