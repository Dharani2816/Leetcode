class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string num1 = to_string(num);
        int n = num1.size();
        int result = 0;
        for(int i=0;i<=n-k;i++){
            int val = stoi(num1.substr(i,k));
            if(val !=0 && num%val == 0){
                result++;
            }
        }
        return result;
    }
};