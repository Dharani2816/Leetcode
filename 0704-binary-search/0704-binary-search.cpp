class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int start = 0;
        int end = size-1;
        int mid = (end + start)/2;
        while(start < end){
            if(target < nums[mid]){
                end = mid - 1;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else{
                return mid;
            }
            mid = (end + start)/2;
        }
        return -1;
    }
};