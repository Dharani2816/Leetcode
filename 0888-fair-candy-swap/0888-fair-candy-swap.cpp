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
            int left = 0,right = n-1;
            while(left <= right){
                int mid = (left+right)/2;
                double a = ((double)total2 - (double)total1) + (double)2*aliceSizes[i];
                a /= 2.0;
                if((double)bobSizes[mid] == a){
                    res.push_back(aliceSizes[i]);
                    res.push_back(bobSizes[mid]);
                    return res;
                }
                else if(double(bobSizes[mid]) < a){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
        }
        return {-1,-1};
    }
};