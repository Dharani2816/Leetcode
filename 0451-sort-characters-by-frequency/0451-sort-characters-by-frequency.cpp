class Solution {
public:
    string frequencySort(string s) {
       int freq[123] = {0};
        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }
        sort(s.begin(), s.end(),
             [&](char a, char b) {
                if(freq[a] > freq[b]){
                    return true;
                }
                else if(freq[a] < freq[b]){
                    return false;
                }
                else{
                    if(a < b){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
             });
        return s;
    }
};