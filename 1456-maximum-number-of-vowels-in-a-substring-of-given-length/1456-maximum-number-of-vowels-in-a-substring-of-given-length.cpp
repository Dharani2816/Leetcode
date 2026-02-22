class Solution {
public:
    int maxVowels(string s, int k) {
        int start = 0;
        int end = 0;
        int maxLength = 0;
        string curr = "";
        int vowelcount = 0;
        while (end < s.size()) {
            while (end - start + 1 <= k) {
                if (s[end] == 'a' || s[end] == 'e' || s[end] == 'i' ||
                    s[end] == 'o' || s[end] == 'u') {
                    vowelcount++;
                }
                curr += s[end++];
            }
            maxLength = max(maxLength, vowelcount);
            curr.erase(0, 1);
            if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' ||
                s[start] == 'o' || s[start] == 'u') {
                vowelcount--;
            }
            start++;
        }
        return maxLength;
    }
};