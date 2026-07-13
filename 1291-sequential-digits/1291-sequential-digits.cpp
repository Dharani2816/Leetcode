class Solution {
public:
    // bool isSequential(int num){
    //     int prevDigit = num%10+1;
    //     while(num != 0){
    //         int digit = num % 10;
    //         if(digit + 1 != prevDigit){
    //             return false;
    //         }
    //         prevDigit = digit;
    //         num /= 10;
    //     }
    //     return true;
    // }
    vector<int> sequentialDigits(int low, int high) {
        string number = "123456789";
        vector<int>result;
        for(int i=0;i<number.size();i++){
            string a = "";
            for(int j=i;j<number.size();j++){
                a+=number[j];
                int num = stoi(a);
                if(num >= low && num<=high){
                    result.push_back(num);
                }
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};