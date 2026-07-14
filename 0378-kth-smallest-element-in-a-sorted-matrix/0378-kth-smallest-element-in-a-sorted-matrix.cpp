class Solution {
public:
    vector<int>merge(vector<int>&a,vector<int>&b){
        int i = 0,j=0;
        vector<int>result(a.size()+b.size(),0);
        int k = 0;
        while(i < a.size() && j < b.size()){
            if(a[i] < b[j]) result[k++] = a[i++];
            else result[k++] = b[j++];
        }

        while(i < a.size()) result[k++] = a[i++];
        while(j < b.size()) result[k++] = b[j++];
        return result;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        if(matrix.size() == 1){
            return matrix[0][k-1];
        }
        vector<int>b(matrix[0].begin(),matrix[0].end());
        for(int i=1;i<matrix.size();i++){
            b = merge(b,matrix[i]);
        }
        return b[k-1];
    }
};