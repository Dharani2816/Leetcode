class Solution {
public:
    bool isWellFormed(string a){
        int left = 0;
        for(int i=0;i<a.size();i++){
            if(a[i] == '(') left++;
            else left--;
            if(left < 0) return false;
        }
        if(left == 0) return true;
        return false;
    }
    void generateP(int index,string a,int n,vector<string>&result){
        if(index >= n) {
            if(isWellFormed(a)){
                cout<<a<<endl;
                result.push_back(a);
            }
            return;
        }
        a+='(';
        generateP(index+1,a,n,result);
        a.erase(index,1);
        a+=')';
        generateP(index+1,a,n,result);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        generateP(0,"",2*n,result);
        return result;
    }
};