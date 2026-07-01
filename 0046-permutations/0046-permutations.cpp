class Solution {
public:
    void generate(int index,vector<vector<int>>&result,vector<int>&a,vector<int>nums,int(&arr)[21]){
        if(index == nums.size()){
            result.push_back(a);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(arr[nums[i]+10] == 0){
                arr[nums[i]+10]++;
                a.push_back(nums[i]);
                generate(index+1,result,a,nums,arr);
                a.pop_back();
                arr[nums[i]+10]--;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        int arr[21];
        vector<int>a;
        generate(0,result,a,nums,arr);
        return result;
    }
};