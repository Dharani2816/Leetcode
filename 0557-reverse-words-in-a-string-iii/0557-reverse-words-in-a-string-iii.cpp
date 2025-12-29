class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = 0;
        string result = "";
        stack<char>word;
        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                word.push(s[i]);
            }
            else{
                while(!word.empty()){
                    result+=word.top();
                    word.pop();
                }
                result+=s[i];
            }
        }
        while(!word.empty()){
                    result+=word.top();
                    word.pop();
        }
        
        return result;
    }
};