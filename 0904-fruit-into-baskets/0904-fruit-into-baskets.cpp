class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int n = arr.size();
        int left = 0;
        int ans = 0;

        unordered_map<int, int> freq;

        for(int right =0; right < n; right++)
        {
            freq[arr[right]]++;

            while(freq.size() > 2){
                freq[arr[left]]--;

                if(freq[arr[left]] == 0)
                {
                    freq.erase(arr[left]);
                }

                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};