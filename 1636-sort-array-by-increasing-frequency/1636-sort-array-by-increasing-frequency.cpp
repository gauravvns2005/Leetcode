class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        vector<int> ans;

        while (!mp.empty()) {

            int maxEle = 0;
            int maxFre = 0;

            for (auto x : mp) {

                if (x.second > maxFre) {
                    maxFre = x.second;
                    maxEle = x.first;
                }
                else if (x.second == maxFre && x.first < maxEle) {
                    maxEle = x.first;
                }
            }

            for (int i = 0; i < maxFre; i++) {
                ans.push_back(maxEle);
            }

            mp.erase(maxEle);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};