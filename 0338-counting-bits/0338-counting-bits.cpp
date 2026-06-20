class Solution {
public:
    int setBits(int n){
        int count = 0;
        while(n != 0){
            count += (n & 1);
            n = n >> 1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>result;
        for(int i=0;i<=n;i++){
            result.push_back(setBits(i));
        }
        return result;
    }
};