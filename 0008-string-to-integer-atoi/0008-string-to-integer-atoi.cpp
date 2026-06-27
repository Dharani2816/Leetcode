class Solution {
public:
    int myAtoi(string s) {
        string s1 = "";
        int i = 0;
        bool negative = false;
        int n = s.size();
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i >= n)
            return 0;
        if (s[i] == '-') {
            negative = true;
            i++;
        } else if (s[i] == '+') {
            negative = false;
            i++;
        } else if (s[i] >= '0' && s[i] <= '9') {
        } else {
            return 0;
        }
        while (i < n && s[i] == '0') {
            i++;
        }
        if (i >= n)
            return 0;
        int prod = negative ? -1 : 1;
        long long result = 0;
        for (int j = i; j < n; j++) {
            if (s[j] >= '0' && s[j] <= '9') {
                s1 += s[j];
            } else
                break;
        }
        cout << s1 << endl;
        if (s1 == "")
            return 0;
        else {
            for (int i = 0; i < s1.size(); i++) {
                result = result * 10 + (s1[i] - '0');
                if (result * prod > INT_MAX)
                    return INT_MAX;
                else if (result * prod < INT_MIN)
                    return INT_MIN;
            }
            result = result * prod;
            return (int)result;
        }
        return -1;
    }
};