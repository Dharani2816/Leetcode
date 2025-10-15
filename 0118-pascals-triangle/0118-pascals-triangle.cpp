class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>a;
        for(int i=0;i<numRows;i++){
            if(i == 0){
                a.push_back({1});
            }
            else if(i == 1){
                a.push_back({1,1});
            }
            else{
                vector<int>b;
                b.push_back(1);
                for(int j=1;j<i;j++){
                    b.push_back((a[i-1][j]+a[i-1][j-1]));
                }
                b.push_back(1);
                a.push_back(b);
            }
        }
        return a;
    }
};