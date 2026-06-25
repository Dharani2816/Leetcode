class Solution {
public:
    int maxScore(string s) {
        int maxScore = 0;
        int zeros = 0,ones =0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] == '1') ones++;
        }
        int score = 0;
        for(int i=0;i<n-1;i++){
            if(s[i] == '0') zeros++; // since the current character comes in left string we reduce the total ones by one when we get thhe character as one
           else ones--;
            score=zeros+ones;
            maxScore = max(maxScore,score);
            score = 0;
        }   
        return maxScore;
    }
};