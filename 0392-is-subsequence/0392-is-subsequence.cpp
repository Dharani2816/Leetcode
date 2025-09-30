class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char>a;
        int j = 0,i=0;
        for(int i=0;i<t.size();i++){
            if(s[j] == t[i]){
                a.push(t[i]);
                j++;
            }
        }
        if(s.size() != a.size()){
            return false;
        }
        else{
            int count = 0;
            int j=s.size()-1;
            while(!a.empty()){
                if(a.top() != s[j]){
                    return false;
                }
                a.pop();
                j--;
            }
            return true;
        }
    }
};