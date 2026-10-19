class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int tar) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> ans;

    for(int i = 0; i<n; i++){
        if(arr[i] == tar){
            ans.push_back(i);
        }
        }

        return ans;
    }
};