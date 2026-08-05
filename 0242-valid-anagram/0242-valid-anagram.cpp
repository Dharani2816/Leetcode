class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]%97]++;
        }
        for (int i = 0; i < t.size(); i++) {
            if (freq[t[i]%97]) {
                freq[t[i]%97]--;
            } else {
                return false;
            }
        }
        for (int i = 0; i < t.size(); i++) {
            if (freq[t[i]%97] != 0) {
                return false;
            }
        }
        return true;
    }
};