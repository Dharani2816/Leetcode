class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int *a = new int[nums.size()+1];
    vector<int>result;
    for(int i=0;i<nums.size();i++){
            a[nums[i]] = 1;
    }
    for(int i=1;i<=nums.size();i++){
        if(a[i] != 1){
            result.push_back(i);
        }
    }
    delete[] a;
     return result;
    }
};