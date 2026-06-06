class Solution {
public:
    int maxDepth(string s) {
        int res = INT_MIN;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                st.pop();
            }
            res = max(res,(int)st.size());
        }
        return res;
    }
};