class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(),n = nums2.size();
        vector<int>result(m+n,0);
        int i=0,j=0; int k = 0;
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                result[k++] = nums1[i++];
            }
            else{
                result[k++] = nums2[j++];
            }
        }
        while(i < m)  result[k++] = nums1[i++];
        while(j < n) result[k++] = nums2[j++];
        double ans = 0;
        if(result.size() & 1){
            int index = result.size()/2;
            ans = result[index];
        }
        else{
            int index = result.size()/2;
            ans = (result[index]+result[index-1] )/ 2.0;
        }
        return ans;
    }
};