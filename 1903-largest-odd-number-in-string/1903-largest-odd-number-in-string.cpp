class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
            int last = n;
            string res = "";
            for(int i=n-1;i>=0;i--){
                int b = int(num[i]-'0');
                if(b%2 != 0){
                    last = i;
                    break;
                }
            }
            if(last != n){
                    res = num.substr(0,(last)+1);
            }
            return res;
        }
};