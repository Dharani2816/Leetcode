class Solution {
public:
    bool isGood(int a,int b,int c,vector<int>arr){
        arr[a]--;arr[b]--;arr[c]--;
        for(int i=0;i<10;i++){
            if(arr[i] < 0){
                return false;
            }
        }
        return true;
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>arr(10,0);
        for (int i = 0; i < digits.size(); i++) {
            arr[digits[i]]++;
        }
        vector<int>result;
        for (int i = 100; i <= 999; i++) {
            if (i % 2 == 0) {
                int c = i;
                int digit1 = c % 10;
                c /= 10;
                int digit2 = c % 10;
                c /= 10;
                int digit3 = c % 10;
                c /= 10;
                if(isGood(digit1,digit2,digit3,arr)){
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};