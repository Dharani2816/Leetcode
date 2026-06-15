class Solution {
public:
    int beauty(int freq[]){
        int maxFreq = INT_MIN,minFreq = INT_MAX;
        for(int i=0;i<26;i++){
            if(freq[i] > 0){
            maxFreq = max(maxFreq,freq[i]);
            minFreq = min(minFreq,freq[i]);
            }
        }
        return (maxFreq-minFreq);
    }
    int beautySum(string s) {
        int sum = 0;
        for(int i=0;i<s.size();i++){
            int freq[26] = {0};
            string a = "";
            for(int j=i;j<s.size();j++){
                a+=s[j];
                freq[(s[j]%97)]++;
                sum+=beauty(freq);
            }
        }
        return sum;
    }
};