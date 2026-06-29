class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        int k1 = n-k;
        int left = 0,right;
        int total = 0;
        for(int i=0;i<n;i++){
            total+=cardPoints[i];
        }
        for(right = 0;right<k1;right++){
            sum+=cardPoints[right];
        }
        int maxScore = (total-sum);
        for(right=k1;right<n;right++){
            sum -= cardPoints[left];
            left++;
            sum+=cardPoints[right];
            maxScore = max(maxScore,(total-sum));
        }
        return maxScore;
    }
};