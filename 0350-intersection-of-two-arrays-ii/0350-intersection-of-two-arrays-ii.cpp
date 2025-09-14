class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
       for(int i=0;i<nums1.size();i++){
            auto it = find(nums2.begin(),nums2.end(),nums1[i]);
            if(it != nums2.end()){
                res.push_back(nums1[i]);
                int idx = (it-nums2.begin());
                nums2.erase(nums2.begin()+idx);
            }
       }
       return res;
    }
};