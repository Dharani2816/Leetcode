class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int left = n - k >= 1 ?n-k :1;
        int right = n + k;int sum = 0;
        cout<<left<<" "<<right<<endl;
        for(int i=left;i<=right;i++){
            if((n & i) == 0){
                sum+=i;
            }
        }
        return sum;
    }
};