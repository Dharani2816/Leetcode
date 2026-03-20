class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s3 = s1 +' '+ s2;
        string s = "";
        vector<string>r;
        unordered_map<string,int>m;
        for(int i=0;i<s3.size();i++){
            if(s3[i] == ' '){
                r.push_back(s);
                m[s]++;
                s = "";
            }
            else
                s += s3[i];
        }
        m[s]++;
        r.push_back(s);
        vector<string>result;
        for(int i=0;i<r.size();i++){
            if(m[r[i]] == 1){
                result.push_back(r[i]);
            }
        }
        return result;
    }
};