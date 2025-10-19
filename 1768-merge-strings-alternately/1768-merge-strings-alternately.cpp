class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string res;
        int i = 0,j=0;
        int iflag = 0;
        int jflag = 1;
        while(i < n && j < m){
            if(iflag == 0){
                res+=word1[i];
                iflag = 1;
                jflag = 0;
                i++;
            }
            else if(jflag == 0){
                res+=word2[j];
                jflag = 1;
                iflag = 0;
                j++;
            }
        }
        while(i < n){
            res+=word1[i];
            i++;
        }
        while(j < m){
            res+=word2[j];
            j++;
        }
        return res;
    }
};