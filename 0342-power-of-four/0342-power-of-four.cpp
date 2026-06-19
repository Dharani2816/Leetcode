class Solution {
public:
     bool isPower(int i,int n){
        if(pow(4,i) >= n){
            if(pow(4,i) > n) return false;
            return true;
        }
        return isPower(i+1,n);
    }
    bool isPowerOfFour(int n) {
        return isPower(0,n);
    }
};