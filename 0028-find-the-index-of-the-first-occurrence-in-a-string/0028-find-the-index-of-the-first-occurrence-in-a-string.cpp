class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int>ans;
        int n = haystack.size();
        int m = needle.size();
        int j = 0;
        for(int i=0;i<n;i++){
            if(haystack[i] == needle[j]){
                ans.push_back(i);
                j++;
            }
           else if(j!=0 && haystack[i] != needle[j]){
                i = ans.front()+1;
                ans.clear();
                j=0;
            }
            if(j == m){
                return ans.front();
            }
        }
       return -1;
    }
};