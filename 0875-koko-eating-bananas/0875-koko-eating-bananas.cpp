class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxElement = 0;
        int n = piles.size();
        for(int i=0;i<n;i++){
            maxElement = max(maxElement,piles[i]);
        }
        int answer = INT_MAX;
        int left = 1,right = maxElement;
        while(left <= right){
            int mid = (left + (right-left)/2);
            long long h1 = 0;
            for(int j=0;j<n;j++){
                h1 += (piles[j]+mid - 1)/ mid;
            }
            if(h1 <= h){
                answer = mid;
                right = mid - 1;
            }
            else{
                left = mid+1;
            }
        }
        return answer;
    }
};