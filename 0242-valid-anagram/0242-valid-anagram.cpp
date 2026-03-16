class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>count;
        unordered_map<char,int>count1;
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            count1[t[i]]++;
        }
        string r = s + t;
        unordered_set<char>s1(r.begin(),r.end());

        for(auto i:s1){
           // cout<<i<<count[i]<<" "<<count1[i]<<endl;
            if(count[i] != count1[i]){
                return false;
            }
        }
        return true;
    }
};