class Solution {
public:
    string reversePrefix(string word, char ch) {
        int end;
        bool isFound = false;
        for(int i=0;i<word.size();i++){
            if(word[i] == ch){
                isFound = true;
                end = i;
                break;
            }
        }
        if(isFound){
            reverse(word.begin(),word.begin()+(end+1));
        }
        return word;
    }
};