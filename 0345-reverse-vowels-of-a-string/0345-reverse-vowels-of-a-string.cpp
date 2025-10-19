class Solution {
public:
    string reverseVowels(string s) {
        stack<char>a;
        for(int i=0;i<s.size();i++){
             char ch = tolower(s[i]);
             switch(ch){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    a.push(s[i]);
                    break;
             }
        }
          for(int i=0;i<s.size();i++){
             char ch = tolower(s[i]);
             switch(ch){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    s[i] = a.top();
                    a.pop();
                    break;
             }
        }
        return s;
    }
};