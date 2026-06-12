class Solution {
public:
    bool isNice(string s){
        int n = s.size();
        bool isFound[256];
        for(int i=0;i<256;i++){
            isFound[i] = false;
        }
        for(int i=0;i<n;i++){
            isFound[s[i]] = true;
        }int c=0;
        for(int i=0;i<n;i++){
            if(islower(s[i]) && isFound[s[i]-32]){
                c++;
            }
            else if(isupper(s[i]) && isFound[s[i]+32]){
                c++;
            }
        }
        return c==n;
    }
    string longestNiceSubstring(string s) {
        string res = "";
        for(int i=0;i<s.size();i++){
            string a = "";
            for(int j=i;j<s.size();j++){
                a+=s[j];
                if(isNice(a))
                    res = res.size() < a.size() ? a : res;
            }
        }
        return res;
    }
};