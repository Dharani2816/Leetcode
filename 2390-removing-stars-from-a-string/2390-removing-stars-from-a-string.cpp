class Solution {
public:
    string removeStars(string s) {
      stack<char>a;
      for(int i=0;i<s.size();i++){
        if(i!=0 && s[i] == '*'){
            a.pop();
        }
        else{
            a.push(s[i]);
        }
      }

      string res = "";
      while(!a.empty()){
        char t = a.top();
        a.pop();
        res+=t;
      }
      reverse(res.begin(),res.end());
      return res;  
    }
};