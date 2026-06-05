class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        unordered_map<int,bool>isOuter;
        for(int i=0;i<s.size();i++){
            isOuter[i] = false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                if(st.empty()){
                    isOuter[i] = true;
                }
                st.push(s[i]);
            }
            else{
                st.pop();
                if(st.empty()){
                    isOuter[i] = true;
                }
            }
        }
        string result = "";
        for(int i=0;i<s.size();i++){
            if(!isOuter[i]){
                result+=s[i];
            }
        }
        return result;
        
    }
};