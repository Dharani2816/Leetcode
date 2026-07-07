class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>freq;
        string a = "";
        for(int i = 0;i<10;i++){
            a+=s[i];
        }
        vector<string>result;
        freq[a]++;
        for(int i=10;i<s.size();i++){
            a.erase(0,1);
            a+=s[i];
            freq[a]++;
        }
        for(auto it=freq.begin();it!=freq.end();it++){
            if(it->second > 1){
                result.push_back(it->first);
            }
        }
        return result;
    }
};