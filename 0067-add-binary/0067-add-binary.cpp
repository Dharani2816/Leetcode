class Solution {
public:
    string addBinary(string a, string b) {
            int n = a.size();
            int m = b.size();
           // unordered_map<char,int>a1;
            //unordered_map<char,int>b1;
            int num1 = 0,num2 = 0;
            int j=0;
            for(int i= n-1;i>=0;i--){
                num1 += (a[i] - '0')*pow(2,j);
                j++;
            }
            j = 0;
            for(int i= m-1;i>=0;i--){
                num2 += (b[i] - '0')*pow(2,j);
                j++;
            }
            int num3 = num1 + num2;
            string res;
            if(num3 == 0){
                res += '0';
            }
            else{
            while(num3 != 0){
                int num = num3 % 2;
                if(num == 1){
                    res += '1';
                }
                else{
                    res+='0';
                }
                num3 /= 2;
            }
            }
            reverse(res.begin(),res.end());
            return res;
    }

};