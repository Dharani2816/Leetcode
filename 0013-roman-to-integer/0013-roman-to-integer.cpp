class Solution {
public:
    int romanToInt(string s) {
        map<char, int> a;
        a['I'] = 1;
        a['V'] = 5;
        a['X'] = 10;
        a['L'] = 50;
        a['C'] = 100;
        a['D'] = 500;
        a['M'] = 1000;
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if(a[s[i]] < a[s[i+1]]){
                ans+=(a[s[i+1]] - a[s[i]]);
                i++;
            }
            else{
                ans+=a[s[i]];
            }
        }
        return ans;
    }
};