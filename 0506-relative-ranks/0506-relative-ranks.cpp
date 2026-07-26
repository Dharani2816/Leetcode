class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        int n = score.size();
        vector<string>result(n,"");
        for(int i=0;i<n;i++){
            pair<int,int>a;
            a.first = score[i];
            a.second = i;
            pq.push(a);
        }
        int i=1;
        while(!pq.empty()){
            pair<int,int>b = pq.top();
            pq.pop(); string a =  "";
            if(i == 1) a = "Gold Medal";
            else if(i == 2) a= "Silver Medal";
            else if(i == 3) a  = "Bronze Medal";
            else a = to_string(i);
            i++;
            result[b.second] = a;
        }
        return result;
    }
};