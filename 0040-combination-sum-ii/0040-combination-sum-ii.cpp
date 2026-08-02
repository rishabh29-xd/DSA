class Solution {
public:
    void getAllcombin(vector<int> &arr, vector<int> &combin, int i,
                       vector<vector<int>> &ans, int target) {
        if (target == 0) {
            ans.push_back(combin);
            return;
        }
        int n = arr.size();
        for (int j = i; j < n; j++) {
            if (j > i && arr[j] == arr[j - 1]) continue;  // skip duplicate values at this level
            if (arr[j] > target) break;                    // sorted → no smaller option ahead

            combin.push_back(arr[j]);
            getAllcombin(arr, combin, j + 1, ans, target - arr[j]);  // move to j+1, no reuse
            combin.pop_back();                              // backtrack
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> combin;
        vector<vector<int>> ans;
        getAllcombin(candidates, combin, 0, ans, target);
        return ans;
    }
};