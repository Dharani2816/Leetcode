class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int n = digits.size();
        int i = n-1;
        int sum = carry + digits[i] + 1;
        vector<int>result;
        while(i>=0){
            if(sum >= 10){
                result.push_back(sum % 10);
                carry = sum / 10;
            }
            else{
                result.push_back(sum);
                carry = 0;
            }
            if(i == 0){
                break;
            }
            i--;
            sum = carry + digits[i];
        }
        if(carry != 0){
            result.push_back(carry);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};