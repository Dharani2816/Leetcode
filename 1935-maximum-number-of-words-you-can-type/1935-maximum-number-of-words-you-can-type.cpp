class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char, int> a;
        for (int i = 0; i < brokenLetters.size(); i++) {
            a[brokenLetters[i]] = 1;
        }
        vector<string> res;
        string curr = "";
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                res.push_back(curr);
                curr = "";
            } else {
                curr += text[i];
            }
        }
        res.push_back(curr);
        int count = 0;
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                if (a[res[i][j]] == 1) {
                    count++;
                    break;
                }
            }
        }

        int ans = res.size() - count;
        return ans;
    }
};