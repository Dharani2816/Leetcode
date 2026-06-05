class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = fruits.size();
        unordered_map<int,bool>canPlace;
        for(int i=0;i<baskets.size();i++){
            canPlace[i] = true;
        }
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(canPlace[j] && fruits[i] <= baskets[j]){
                    ans--;
                    canPlace[j] = false;
                    break;
                }
            }
        }
        return ans;
    }
};