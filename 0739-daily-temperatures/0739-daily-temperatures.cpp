class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // same as next greater but instead we are storing indices to track the
        // no of days
        int n = temperatures.size();
        stack<int> st;
        vector<int> result(n, 0);
        // traverse from right to left and to make sure the stack is in
        // decreasing order check whether top element is greater than the
        // current if yes the top element is the ans for the element if not pop
        // element until satisfies if the stack is empty no greater temp if not
        // empty the top is the next warmer one
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && temperatures[st.top()] <= temperatures[i])
                st.pop();
            if (!st.empty())
                result[i] = st.top() - i;
            st.push(i);
        }
        return result;
    }
};