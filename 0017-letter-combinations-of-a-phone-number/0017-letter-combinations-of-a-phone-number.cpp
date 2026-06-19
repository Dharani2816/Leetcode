class Solution {
public:
    void generate(int index,string b,string &digits,unordered_map<char,string>&a,vector<string>&res){
        if(index >= digits.size()){
            cout<<b<<endl;
            res.push_back(b);
            return;
        }
        char number = digits[index];
        string s = a[number];
        for(int i=0;i<s.size();i++){
            b+=s[i];
            generate(index+1,b,digits,a,res);
            b.erase(index,1);
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>a;
        vector<string>result;
        string b = "abcdefghijklmnopqrstuvwxyz";
        int j = 0;
        for(char i='2';i<='9';i++){
            if(i == '7' || i == '9'){
                a[i] = b.substr(j,4);
                j+=4;
            }
            else{
                a[i] = b.substr(j,3);
                j+=3;
            }
        }
        generate(0,"",digits,a,result);
        return result;
    }
};