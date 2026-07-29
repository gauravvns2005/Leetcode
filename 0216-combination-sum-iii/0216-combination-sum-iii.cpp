class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(int start, int k, int target) {
        if (k == 0 && target == 0) {
            ans.push_back(temp);
            return;
        }

        if (k == 0 || target <= 0)
            return;

        for (int i = start; i <= 9; i++) {
            temp.push_back(i);
            solve(i + 1, k - 1, target - i);
            temp.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        solve(1, k, n);
        return ans;
    }
};