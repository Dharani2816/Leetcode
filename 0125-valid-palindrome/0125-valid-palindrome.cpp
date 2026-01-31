class Solution {
public:
    bool isPalindrome1(string a){
        string b = a;
        reverse(b.begin(),b.end());
        if(a == b){
            return true;
        }
        else{
            return false;
        }
    }
    bool isPalindrome(string s) {
        string s1="";
        for(char i:s){
            if(isalnum(i))
                s1+=tolower(i);
        }
        return isPalindrome1(s1);
    }
};