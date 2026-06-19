class Solution {
public:
    void generate(int i,int k,int sum,int n,vector<int>a,vector<vector<int>>&res){
        if(i > n){
            if(a.size() == k && sum == 0){
                res.push_back(a);
            }
            return;
        }
        if(i <= sum){
            a.push_back(i);
            generate(i+1,k,sum-i,n,a,res);
            a.pop_back();
        }
        generate(i+1,k,sum,n,a,res);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>result;vector<int>a;
        generate(1,k,n,9,a,result);
        return result;
    }
};