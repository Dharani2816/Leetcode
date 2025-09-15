class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char, int> a;
        for (int i = 0; i < brokenLetters.size(); i++) {
            a[brokenLetters[i]] = 1;
        }
        int flag = 0;
        int count = 0;
        for (int i = 0; i < text.size(); i++) {
            if (a[text[i]] == 1 && flag == 0) {
                count++;
                flag = 1;
            } 
            if(text[i] == ' '){
                flag = 0;
            }
        }
        int wordCount = 0;
        for(int i=0;i<text.size();i++){
            if(text[i] == ' '){
                wordCount++;
            }
        }
        wordCount++;

        int ans = wordCount - count;
        return ans;
    }
};