class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int maxElement = 0;
        for(int i=0;i<arr.size();i++){
            maxElement = max(maxElement,arr[i]);
        }
        int k1 = 0;
       for(int i=1;i<=maxElement;i++){
        if(find(arr.begin(),arr.end(),i) == arr.end()){
            k1++;
            if(k1 == k){
                return i;
            }
        }
       }
       int c = k - k1;
       return maxElement + c;
    }
};