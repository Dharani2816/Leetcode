class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*  sort(strs.begin(), strs.end(), [](const string &a, const string &b)
   { return a.size() < b.size();
   });
       string result = "";
       int n = strs.size();
       int m = strs[0].size();
       int k = 0;
       int flag;
       for (int i = 0; i < m; i++) {
           flag = 1;
           char a = strs[0][i];
           for (int j = 1; j < n; j++) {
               if (a == strs[j][i]) {
                   flag++;
               }
           }
           if (flag == n) {
               result[k] = a;
               k++;
           }
       }
       return result;*/
        sort(strs.begin(), strs.end());
        string result = "";
        int m = strs[0].size();
        int n = strs.size();
        for (int i = 0; i < m; i++) {
            if (strs[0][i] == strs[n - 1][i]) {
                result.push_back(strs[0][i]);
            }
            else{
                break;
            }
        }
        /*if(result[0] == ' '){
            return "";
        }
         result.erase(remove(result.begin(), result.end(), ' '), result.end());*/
        return result;
    }
};