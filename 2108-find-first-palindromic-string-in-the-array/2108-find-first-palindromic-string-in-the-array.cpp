class Solution {
public:
    bool isPalindrome(string&a){
        int left = 0,right=a.size()-1;
        while(left < right){
            if(a[left] != a[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(words[i][0] != words[i][words[i].size()-1]){}
            else {
                if(isPalindrome(words[i])){
                    return words[i];
                }
        }
    }
    return "";
    }
};