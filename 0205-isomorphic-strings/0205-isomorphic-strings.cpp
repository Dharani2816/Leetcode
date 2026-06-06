class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mapped;
        for(int i=0;i<s.size();i++){
            if(mapped[s[i]]){
                if(t[i] != mapped[s[i]]){
                    return false;
                }
            }
            else{
                mapped[s[i]] = t[i];
            }
        }
        mapped.clear();
        for(int i=0;i<t.size();i++){
            if(mapped[t[i]]){
                if(s[i] != mapped[t[i]]){
                    return false;
                }
            }
            else{
                mapped[t[i]] = s[i];
            }
        }
        return true;
    }
};