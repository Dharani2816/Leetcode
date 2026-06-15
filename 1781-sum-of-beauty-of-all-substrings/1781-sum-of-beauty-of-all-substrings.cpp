class Solution {
public:
    int beauty(string s,int freq[]){
        int maxFreq = INT_MIN,minFreq = INT_MAX;
        for(int i=0;i<s.size();i++){
            maxFreq = max(maxFreq,freq[s[i]]);
            minFreq = min(minFreq,freq[s[i]]);
        }
        return (maxFreq-minFreq);
    }
    int beautySum(string s) {
        int sum = 0;
        for(int i=0;i<s.size();i++){
            int freq[123] = {0};
            string a = "";
            for(int j=i;j<s.size();j++){
                a+=s[j];
                freq[s[j]]++;
                sum+=beauty(a,freq);
            }
        }
        return sum;
    }
};