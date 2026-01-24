class Solution {
public:
    int compress(vector<char>& chars) {
        string result = "";
        char a = chars[0];
        int count = 1;
        for (int i = 1; i < chars.size(); i++) {
            if (chars[i] == a) {
                count++;
            } else {
                result += a;
                if (count > 1) {
                    if (count < 10) {
                        result += (count + '0');
                    } else {
                        result += to_string(count);
                    }
                }
                a = chars[i];
                count = 1;
            }
        }
        result += a;
        if (count > 1) {
            if (count < 10) {
                result += (count + '0');
            } else {
                result += to_string(count);
            }
        }
        chars.clear();
       for(char i:result){
        chars.push_back(i);
       }
        return (int)chars.size();
    }
};