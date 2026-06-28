class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum = 0;
        if(k == 0) return sum;
        for(int i=0;i<numOnes;i++){
            if(k == 0) return sum;
            sum+=1;
            k--;
        }
        for(int i=0;i<numZeros;i++){
            if(k == 0) return sum;
            k--;
        }
        for(int i=0;i<numNegOnes;i++){
            if(k == 0) return sum;
            sum-=1;
            k--;
        }
        return sum;
    }
};