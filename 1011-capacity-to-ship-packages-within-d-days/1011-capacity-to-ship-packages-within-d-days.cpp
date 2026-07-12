class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int m = INT_MIN;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            m = max(m,weights[i]);
        }
        int left = m,right = sum; int ans = 0;
        while(left <= right){
            int mid = left + (right-left)/2;
            int capacity = mid; int d = 0;
            for(int j=0;j<weights.size();j++){
                if(capacity - weights[j] <  0){
                     d++;
                    capacity = mid;
                }
                if(capacity - weights[j] >= 0){
                    capacity -= weights[j];
                }
            }
            d++;
            if(d <= days){
                ans  = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
};