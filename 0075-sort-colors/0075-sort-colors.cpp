class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countOf0 = 0;
        int countOf1 = 0;
        int countOf2 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                countOf0++;
            }
            else if(nums[i] == 1){
                countOf1++;
            }
            else{
                countOf2++;
            }
    }

    int i=0;
    for(int j=0;j<countOf0;j++){
        nums[i++] = 0;
    }
    for(int j=0;j<countOf1;j++){
        nums[i++] = 1;
    }
    for(int j=0;j<countOf2;j++){
        nums[i++] = 2;
    }
    }
};