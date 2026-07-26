class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x:mp){
            pair<int,int>a;
            a.second = x.first; a.first = x.second;
            pq.push(a);
        }
        vector<int>result;
        int i = 1;
        while(!pq.empty() && i <= k){
            result.push_back(pq.top().second);
            pq.pop();
            i++;
        }
        return result;
    }
};