class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int negIndex=-1;int mid;
        while(low <= high){
            mid = (low+high)/2;
            if(nums[mid] < 0)
                negIndex = max(negIndex,mid);
            if(nums[mid] >= 0){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        low = 0;
        high = nums.size()-1;    int posIndex = nums.size();
        while(low <= high){
            mid = (low+high)/2;
            if(nums[mid] > 0)
                posIndex = min(posIndex,mid);
            if(nums[mid] <= 0){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        cout<<negIndex<<" "<<posIndex<<endl;
        int pos = (nums.size()-posIndex);
        int neg = negIndex+1;
        return max(pos,neg);
    }
};