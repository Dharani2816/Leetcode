class Solution {
public:
    int search(vector<int>& nums, int target) {
       int low = 0;
       int high = nums.size()-1;
       while(low <= high){
        int mid = (low+high)/2;
        //cout<<low<<" "<<mid<<" "<<high<<endl;
        if(target == nums[mid]){
            return mid;
        }
       else if(nums[low] <= nums[mid]){
            //left part is sorted
            if(nums[low] <= target && target <= nums[mid]){
                high = mid-1;
            }
            else{
                //if not present in sorted part it is present in unsorted part
                low = mid+1;
            }
        }
        else if(nums[mid] <= nums[high]){
            //right part is sorted
            if(nums[mid] <= target && target <= nums[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
       }
       return -1;
    }
};