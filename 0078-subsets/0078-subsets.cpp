class Solution {
public:
    void generate(int index,int n,vector<int>&nums,vector<int>a,vector<vector<int>>&res){
        if(index == n){
            res.push_back(a);
            return;
        }
        a.push_back(nums[index]);
        generate(index+1,n,nums,a,res);
        a.pop_back();
        generate(index+1,n,nums,a,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>result;
       vector<int>a;
       sort(nums.begin(),nums.end());
       generate(0,nums.size(),nums,a,result);
      // result.erase(unique(result.begin(),result.end()),result.end());
       return result; 
    }
};