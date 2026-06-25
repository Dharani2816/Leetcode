class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count1 = 0;
        int sum = 0;
        int left  =0;
        for(int right = 0;right<nums.size();right++){
            sum += nums[right];
            while(left <= right && sum >= goal){
                sum-=nums[left];
                left++;
            }
            count1+=(right-left)+1;
        }
        int count2 = 0;sum=0,left = 0;
        for(int right = 0;right<nums.size();right++){
            sum += nums[right];
            while(left <= right && sum > goal){
                sum-=nums[left];
                left++;
            }
            count2+=(right-left)+1;
        }
        cout<<count1<<" "<<count2<<endl;
        return (count2-count1);
    }
};