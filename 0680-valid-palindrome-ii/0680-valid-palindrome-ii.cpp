class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        int skipped = 0;
        while (left < right) {
            if (s[left] != s[right]) {
                if (skipped == 0) {
                    left++;
                    skipped++;
                } else
                    break;
            } else {
                left++;
                right--;
            }
        }
        if(left >= right){
            return true;
        }
        skipped = 0;left = 0;right = s.size()-1;
        while (left < right) {
            if (s[left] != s[right]) {
                if (skipped == 0) {
                    right--;
                    skipped++;
                } else
                    return false;
            } else {
                left++;
                right--;
            }
        }
        return true;
    }
};