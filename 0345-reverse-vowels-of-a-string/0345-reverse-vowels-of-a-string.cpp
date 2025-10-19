class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j){
             char ch1 = tolower(s[i]);
             char ch2 = tolower(s[j]);
             if(ch1 != 'a' && ch1 != 'e' && ch1 != 'i' && ch1 != 'o' && ch1 != 'u'){
                i++;
             }
             else if(ch2 != 'a' && ch2 != 'e' && ch2 != 'i' && ch2 != 'o' && ch2 != 'u'){
                j--;
             }
             else{
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
             }
        }
        return s;
    }
};