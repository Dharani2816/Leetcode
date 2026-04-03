class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int>count;
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
        }
        int length = 0;
        for(int i=0;i<s.size();i++){
            if(count[s[i]] > 1 && count[s[i]]%2 != 0){
                count[s[i]]--;
            }
            else if(count[s[i]]%2 == 0){
                length++;
            }
        }
        return ((length == s.size())?length:length+1);
    }
};