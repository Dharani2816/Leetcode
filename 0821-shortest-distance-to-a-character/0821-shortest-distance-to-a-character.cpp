class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>indices;
        for(int i=0;i<s.size();i++){
            if(s[i] == c){
                indices.push_back(i);
            }
        }
        vector<int>result;
        int minDiff;
        for(int i=0;i<s.size();i++){
            minDiff = s.size();
            for(int j=0;j<indices.size();j++){
                if(abs(i - indices[j]) < minDiff){
                    minDiff = abs(i-indices[j]);
                }
            }
            result.push_back(minDiff);
        }
        return result;
    }
};