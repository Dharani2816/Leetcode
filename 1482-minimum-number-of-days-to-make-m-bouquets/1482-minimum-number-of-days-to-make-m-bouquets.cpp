class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();
        int maxDays = 0;
        int minDays = INT_MAX;
        for (int i = 0; i < n; i++) {
            minDays = min(minDays, bloomDay[i]);
            maxDays = max(maxDays, bloomDay[i]);
        }
        int left = minDays, right = maxDays;
        int answer = -1 ;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int boquets = 0;
            int bloomed = 0;
            for (int j = 0; j < n; j++) {
                if (bloomDay[j] > mid) {
                    boquets += (bloomed / k);
                    bloomed = 0;
                }
                if (bloomDay[j] <= mid) {
                    bloomed++;
                }
            }
            boquets += bloomed / k;
            if(boquets >= m){
                answer = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return answer;
    }
};