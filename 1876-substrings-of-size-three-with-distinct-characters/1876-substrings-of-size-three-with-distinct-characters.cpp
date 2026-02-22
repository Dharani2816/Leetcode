class Solution {
public:
    bool isGoodString(string s){
        unordered_set<char> a(s.begin(), s.end());
        if(a.size() == s.size()){
            return true;
        }
        else{
            return false;
        }
    }
    int countGoodSubstrings(string s) {
        int start = 0;
        int end = 0;
        string currString = "";
        int result = 0;
        while(end < s.size()){
            while(end-start+1 <= 3){
                currString+=s[end++];
            }
            if(currString.size() == 3 && isGoodString(currString)){
                result++;
            }
            currString.erase(0,1);
            start++;
        }
        return result;
    }
};