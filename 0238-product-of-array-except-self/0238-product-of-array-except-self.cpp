class Solution {
public:
    int getPrefixProduct(vector<int>nums,int index){
        if(index == 0){
            return 1;
        }
        else{
            int product = 1;
            for(int i=0;i<index;i++){
                product *= nums[i];
            }
            return product;
        }
    }
    int getSuffixProduct(vector<int>nums,int index){
        if(index == nums.size()-1){
            return 1;
        }
        else{
            int product = 1;
            for(int i=nums.size()-1;i>index;i--){
                product *= nums[i];
            }
            return product;
        }
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>prefProd;
        unordered_map<int,int>suffProd;
        for(int i=0;i<nums.size();i++){
            if(i == 0){
                prefProd[i] = 1;
            }
            else{
                prefProd[i] = prefProd[i-1]*nums[i-1];
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(i == nums.size()-1){
                suffProd[i] = 1;
            }
            else{
                suffProd[i] = suffProd[i+1]*nums[i+1];
            }
        }

        for(int i=0;i<nums.size();i++){
            res.push_back(prefProd[i]*suffProd[i]);
        }
        return res;
    }
};