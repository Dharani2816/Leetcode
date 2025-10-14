class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        stack<int>a;
        a.push(prices[0]);
       for(int i=1;i<prices.size();i++){
        if((prices[i]-a.top() ) > profit){
            profit = prices[i] - a.top();
        }
        if(prices[i] < a.top()){
            a.pop();
            a.push(prices[i]);
        }
       }
        return profit;
    }
};