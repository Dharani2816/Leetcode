class Solution {
public:
    string reverseWords(string s) {
        stack<string>reversed;
        int i = 0;
        string a = "";
        while(s[i] != '\0'){
            if(s[i] != ' '){
                a+=s[i];
            }
            else{
                if(a != ""){
                    reversed.push(a);
                }
                a = "";
            }
            i++;
        }
        if(a != "")
            reversed.push(a);
        s = "";
        while(!reversed.empty()){
            s+=reversed.top();
            reversed.pop();
            if(!reversed.empty()){
                s+=' ';
            }
        }
        return s;
    }
};