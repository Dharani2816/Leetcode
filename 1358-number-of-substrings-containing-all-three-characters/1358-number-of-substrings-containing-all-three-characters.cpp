class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0;
        int n = s.size();
        string a = "";
        int freqA = 0,freqB =0,freqC = 0;
        int count = 0;
        for(int right = 0;right<n;right++){
            if(s[right] == 'a') freqA++;
            else if(s[right] == 'b') freqB++;
            else freqC++;
            while((freqA && freqB )&& freqC){
                if(s[left] == 'a') freqA--;
                else if(s[left] == 'b') freqB--;
                else freqC--;
                left++;
            }
            count+=(right-left)+1;
        }
        long long total = (1LL * (n) *(n+1))/ 2;
        if(total > INT_MAX) total = INT_MAX;
        return ((int)total-count);
    }
};