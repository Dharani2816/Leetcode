class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child = g.size()-1;
        int cookie = s.size()-1;
        int result = 0;
        while(child >= 0 && cookie >=0){
            if(s[cookie] >= g[child]){
                result++;
                cookie--;
                child--;
            }
            else{
              child--;
            }
        }
        return result;
    }
};