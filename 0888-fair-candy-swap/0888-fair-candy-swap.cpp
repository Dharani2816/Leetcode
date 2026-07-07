class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int>res;
        sort(bobSizes.begin(),bobSizes.end());
        int m = aliceSizes.size();
        int n = bobSizes.size();
        int total1 = 0;
        int total2 = 0;
        for(int i=0;i<m;i++){
            total1 += aliceSizes[i];
        }
        for(int i=0;i<n;i++){
            total2 += bobSizes[i];
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               int a = (total1 - aliceSizes[i]) +bobSizes[j];
                int b = (total2 - bobSizes[j])+aliceSizes[i];
                if(a == b){
                    res.push_back(aliceSizes[i]);
                    res.push_back(bobSizes[j]);
                    return res;
                }
            }
        }
        return {-1,-1};
    }
};