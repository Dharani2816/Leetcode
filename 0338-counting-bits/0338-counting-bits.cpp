class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        int count = 0;
        for(int i=0;i<=n;i++){
            int j = i;
            while(j != 0){
                if(j % 2 == 1){
                    count++;
                }
                j = j / 2;
            }
            res.push_back(count);
            count = 0;
        }
        return res;
    }
};