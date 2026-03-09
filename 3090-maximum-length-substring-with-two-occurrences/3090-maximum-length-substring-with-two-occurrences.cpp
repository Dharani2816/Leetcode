class Solution {
public:
    bool isGood(string a){
         unordered_map<char,int>freq;
        for(char i:a){
            freq[i]++;
            if(freq[i] > 2){
                return false;
            }
        }
        return true;
    }
    int maximumLengthSubstring(string s) {
        int start = 0;
        int end = 0;
        int maxLength = 0;
        while(end < s.size()){
            if(isGood(s.substr(start,end-start+1))){
                maxLength = max(maxLength,(end-start+1));
                end++;
            }
            else{
                start++;
            }
        }
        return maxLength;
    }
};