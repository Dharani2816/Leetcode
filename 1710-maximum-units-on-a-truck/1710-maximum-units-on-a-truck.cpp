class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
       sort(boxTypes.begin(),boxTypes.end(),[](vector<int>a,vector<int>b){
            if(a[1] > b[1]){
                return true;
            }
            else if(a[1] < b[1]){
                return false;
            }
            else{
                if(a[0] > b[0]){
                    return true;
                }
                else{
                    return false;
                }
            }
       });
       int result = 0;
       int i = 0;
       while(truckSize > 0 && i<boxTypes.size()){
            if(truckSize >= boxTypes[i][0]){
                result+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
                result += truckSize*boxTypes[i][1];
                truckSize = 0;
                break;
            }
            i++;
       }
       return result; 
    }
};