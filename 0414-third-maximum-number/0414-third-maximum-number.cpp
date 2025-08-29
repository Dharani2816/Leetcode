class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> a(nums.begin(),nums.end());//stores the array element in a sorted and distinct way
        int n = a.size();
        auto it = a.begin();
        if(n == 1){
            return *it; // if size is 1 return that element
        }
        else if(n == 2){
            it++;
            return *it;//If size is 2, the element present in second is a third max
        }
        else{
            auto it1 = a.end();// if size is >=3 return 3rd element from last
            it1--;
            it1--;
            it1--;
            return *it1;
        }
    }
};