class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>>hash1(hash.begin(),hash.end());
        sort(hash1.begin(),hash1.end(),[](pair<int,int>a,pair<int,int>b){
            if(a.second > b.second) return true;
            else return false;
        }); int j= 0;
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(hash1[j++].first);
        }
        return result;
    }
};