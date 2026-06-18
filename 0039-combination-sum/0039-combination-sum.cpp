class Solution {
public:
    vector<vector<int>> result;
    void combination(int index, int n, int sum, vector<int> a,
                     vector<int> candidates, vector<vector<int>>& result) {
        if (index >= n) {
            if (sum == 0) {
                result.push_back(a);
            }
            return;
        }
        if (sum - candidates[index] >= 0) {
            a.push_back(candidates[index]);
            combination(index, n, sum-candidates[index], a, candidates, result);
            a.pop_back();
        }
        combination(index + 1, n, sum, a, candidates, result);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> a;
        vector<vector<int>> result;
        combination(0, candidates.size(), target, a, candidates, result);
        return result;
    }
};