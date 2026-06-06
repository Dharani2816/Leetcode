class Solution {
public:
    int maxDepth(string s) {
        int res = INT_MIN;
        int depth = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                depth++;
            }
            else if(s[i] == ')'){
                depth--;
            }
            res = max(res,depth);
        }
        return res;
    }
};