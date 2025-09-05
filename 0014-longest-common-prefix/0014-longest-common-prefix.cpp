class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());//sort lexicographically
        string result = "";
        int m = strs[0].size();//length of string with least size
        int n = strs.size();//no of strings
        for (int i = 0; i < m; i++) {
            if (strs[0][i] == strs[n - 1][i]) {
                result.push_back(strs[0][i]);
            } else {
                break;
            }
        }
        return result;
    }
};