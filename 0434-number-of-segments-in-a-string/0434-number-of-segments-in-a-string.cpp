class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        s+=" ";
        int prevChar = s[0];
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                if(prevChar != ' ') count++;
            }
            prevChar = s[i];
        }
        return count;
    }
};