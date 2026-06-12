class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> nums1;
        for (int i = 0; i < nums.size(); i++) {
            nums1.push_back(to_string(nums[i]));
        }int c=0;
        for (int i = 0; i < nums.size(); i++) {
            if(nums1[i] == "0"){
                c++;
            }
        }
        if(c == nums1.size()) return "0";
        sort(nums1.begin(), nums1.end(), [&](string a, string b) {
           string c = a+b;
           string d = b+a;
           if(max(c,d) == c){
            return true;
           }
           else{
            return false;
           }
        });
        string result = "";
        for (int i = 0; i < nums1.size(); i++) {
            result += nums1[i];
        }
        return result;
    }
};