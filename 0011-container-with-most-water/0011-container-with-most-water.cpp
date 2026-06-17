class Solution {
public:
    int findArea(int line1,int line2,vector<int>&height){
        int length = abs(line2 - line1);
        int breadth = min(height[line1], height[line2]);
        return (length * breadth);
    }
    int maxArea(vector<int>& height) {
        int line1 = 0,line2 = height.size()-1;
        int maxArea = INT_MIN;
        while(line1 < line2){
            int area = findArea(line1,line2,height);
            maxArea = max(area,maxArea);
            if(height[line1] < height[line2]){
                    line1++;
            }
            else{
                line2--;
            }
        }
        return maxArea;
    }
};