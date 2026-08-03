class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i<arr.size(); i++)
        {
            int need = target - arr[i];

            if(mp.find(need) != mp.end()){
                return {mp[need] + 1, i + 1};
            }

            mp[arr[i]] = i;
        }

        return {};
    }
};