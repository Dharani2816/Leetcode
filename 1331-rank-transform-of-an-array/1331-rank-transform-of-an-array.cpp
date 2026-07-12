class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size() == 0) return arr;
        vector<int>result(arr.size(),0);
        unordered_map<int,int>rank;
        vector<int>arr1(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end()); int r = 1; int prev = arr1[0];
        for(int i=0;i<arr.size();i++){
            if(arr1[i] != prev){
                r++;
            }
            rank[arr1[i]] = r;
            prev = arr1[i]; 
        }
        for(int i=0;i<arr.size();i++){
            result[i] = rank[arr[i]];
        }
        return result;
    }
};