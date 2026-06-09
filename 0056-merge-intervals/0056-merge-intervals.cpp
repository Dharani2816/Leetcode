class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int>a,vector<int>b){
            if(a[0] < b[0]){
                return true;
            }
            else if(a[0] > b[0]){
                return false;
            }
            else{
                if(a[1] < b[1]){
                    return true;
                }
                else{
                    return false;
                }
            }
        });
        vector<int>a(intervals[0].begin(),intervals[0].end());
        vector<vector<int>>result;
        for(int i=1;i<intervals.size();i++){
            if(a[1] >= intervals[i][0] || a[0] == intervals[i][0]){
                a[1] = max(a[1],intervals[i][1]);
            }
            else{
                result.push_back(a);
                a[0] = intervals[i][0];
                a[1] = intervals[i][1];
            }
        }
        result.push_back(a);
        return result;    
        }
};