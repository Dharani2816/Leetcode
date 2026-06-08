class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, twenty = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                five++;
            } else if (bills[i] == 10) {
                ten++;
                five--;
            } else {
                twenty++;
                if(ten > 0)
                    ten--;
                else
                    five -= 2;
                five--;
            }
            if (five < 0 || ten < 0 || twenty < 0) {
                return false;
            }
        }

        return true;
    }
};