class Solution {
public:
    bool isPalindrome(string s){
        int left = 0,right = s.size()-1;
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    void generate(int index,vector<string>&a,vector<vector<string>>&res,string&s){
        if(index == s.size()){
            res.push_back(a);
            return;
        }
        string temp = "";
        for(int i = index;i<s.size();i++){
            temp+=s[i];
            if(isPalindrome(temp)){
                a.push_back(temp);
                generate(i+1,a,res,s);
                a.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>a;
        generate(0,a,result,s);
        return result;
    }
};