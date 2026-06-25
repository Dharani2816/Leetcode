class Solution {
public:
    int largestAltitude(vector<int>& gain) {
     int result = 0;
     int currGain = 0;
     for(int i=0;i<gain.size();i++){
        result = max(result,currGain);
        currGain += gain[i]; 
     }
     result = max(result,currGain);
     return result;   
    }
};