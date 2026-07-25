class NumArray {
public:
    vector<int>nums;
     vector<int>prefix;
    NumArray(vector<int>& nums) {
        this->nums = nums;
        int sum = 0;
        prefix.resize(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            prefix[i] = sum;
            sum += nums[i];
        }
        prefix[nums.size()] = sum;
    }
    
    int sumRange(int left, int right) {
        return (prefix[right+1] - prefix[left]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */