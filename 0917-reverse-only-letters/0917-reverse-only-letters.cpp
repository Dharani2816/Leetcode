class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            if(isalpha(s[left]) && isalpha(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(isalpha(s[left])){
                right--;
            }
            else if(isalpha(s[right])){
                left++;
            }
            else{
                left++;
                right--;
            }
        }
        return s;
    }
};