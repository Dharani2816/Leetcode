class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>a;
        for(int i=0;i<nums2.size();i++){
            a[nums2[i]] = i;
        }
        vector<int>res;
        int flag;
        for(int i=0;i<nums1.size();i++){
            flag = 0;
            for(int j=a[nums1[i]];j<nums2.size();j++){
                if(nums1[i] < nums2[j]){
                    res.push_back(nums2[j]);
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                res.push_back(-1);
            }
        }

        return res;
    }
};