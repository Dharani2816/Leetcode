class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowers = 0,prev,next;
        for(int i=0;i<flowerbed.size();i++){
            if(i == 0){
                prev = 0;
                if((i+1) < flowerbed.size())
                    next = flowerbed[i+1];
                else
                    next = 0;
            }
            else if(i == flowerbed.size()-1){
                if(flowerbed.size() >= 2)
                    prev = flowerbed[flowerbed.size()-2];
                next = 0;
            }
            else{
                prev = flowerbed[i-1];
                next = flowerbed[i+1];
            }
            if(flowerbed[i] == 0 && prev == 0 && next == 0){
                flowers++;
                flowerbed[i] = 1;
            }
        }
        if(n <= flowers){
            return true;
        }
            return false;
    }
};