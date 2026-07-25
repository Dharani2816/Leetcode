class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
     vector<int>result(nums.size(),-1);
     stack<int>st;
     int n = nums.size();
     for(int i=0;i<n;i++){
        nums.push_back(nums[i]);
     }
    for(int i=nums.size()-1;i>=0;i--){
        while(!st.empty() && st.top() <= nums[i]){
            st.pop();
        }
        if(!st.empty() && i < n) result[i] = st.top();
        st.push(nums[i]);
     }
     return result; 
    }
    //-1 5 4 3 2 
};