class Solution {
public:
    bool containsDuplicate(unordered_map<char,int>m){
        for(auto it = m.begin();it!=m.end();it++){
            if(it->second > 1){
                return true;
            }
        }
        return false;
    }
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int left = 0;
        string a = "";
        unordered_map<char,int>hash;
        for(int right = 0;right < s.size();right++){
            a += s[right];
            hash[s[right]]++;
            while(left <= right && containsDuplicate(hash)){
                hash[a[0]]--;
                a.erase(0,1);
                left++;
            }
            maxLen = max(maxLen,(right-left+1));
        }
        return maxLen;
    }
};