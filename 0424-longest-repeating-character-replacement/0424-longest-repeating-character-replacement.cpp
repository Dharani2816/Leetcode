class Solution {
public:
    int getFrequency(int arr[]){
        int freq = 0,maxFreq = 0;
        for(int i=0;i<26;i++){
            maxFreq = max(maxFreq,arr[i]);
            freq+=arr[i];
        }
        return (freq-maxFreq);
    }
    int characterReplacement(string s, int k) {
        // we can restate the problem like finding the longest substring whose non dominant chaarcter's frequency is <=k 
        int freq[26];
        int left = 0;int maxLen = 0;
        for(int right = 0;right<s.size();right++){
            freq[s[right] - 65]++;
            if(left <= right && getFrequency(freq) > k){
                freq[s[left] - 65]--;
                left++;
            }
            maxLen = max(maxLen,right-left+1);
        }
        return maxLen;
    }
};