class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_map<string,bool>hash;
        int count = 0;
        for(int i=0;i<word.size();i++){
            string a = "";
            for(int j=i;j<word.size();j++){
                a+=word[j];
                 hash[a] = true;
            }
        }
         for(int i=0;i<patterns.size();i++){
            if(hash[patterns[i]]) count++;
        }
        return count;
    }
};