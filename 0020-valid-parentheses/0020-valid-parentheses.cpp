class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                a.push(s[i]);
            }
            else if(!a.empty() && s[i] == ')' && a.top() !='('){
                return false;
            }
            else if(!a.empty() && s[i] == ']' && a.top()!='['){
                return false;
            }
            else if(!a.empty() && s[i] == '}' && a.top()!='{'){
                return false;
            }
            else{
                if(!a.empty())
                    a.pop();
                else
                    return false;
            }
        }
        if(!a.empty()){
            return false;
        }
        return true;
    }
};