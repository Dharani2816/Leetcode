class Solution {
public:
    void merge(vector<int>& nums,int left,int right,int mid,int&count){
        int i = left,j = mid+1;
        while(i<=mid && j<=right){
            long long a = (long long)nums[i];
            long long  b = (long long)nums[j] * 2; 
            if(a > b){
                count+=(mid-i)+1;
                // cout<<a<<" "<<b<<" "<<count<<endl;
                j++;
            }
            else{
                i++;
            }
        }
        vector<int>res(right-left+1);
        i = left, j = mid+1; int k = 0;
        while(i<=mid && j<=right){
            if(nums[i] < nums[j]){
                res[k++] = nums[i++];
            }
            else res[k++] = nums[j++];
        }
        while(i<=mid) res[k++] = nums[i++];
        while(j<=right) {res[k++] = nums[j++];} k = 0;
        for(int i=left;i<=right;i++){
            nums[i] = res[k++];
        }
    }
    void mergeSort(vector<int>& nums,int left,int right,int &count){
        if(left >= right){
            return;
        }
        int mid = left + (right-left)/2;
        mergeSort(nums,left,mid,count);
        mergeSort(nums,mid+1,right,count);
        merge(nums,left,right,mid,count);
    }
    int reversePairs(vector<int>& nums) {
        int count = 0;
        mergeSort(nums,0,nums.size()-1,count);
        return count;
    }
};