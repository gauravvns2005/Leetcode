class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>mp;
        int low = 0;
        int maxLen = INT_MIN;

        for(int high = 0; high < s.size(); high++){
            mp[s[high]]++;
            
            int k = high - low + 1;
            while(mp.size() < k)
            {
                mp[s[low]]--;
                if(mp[s[low]] == 0)
                {
                    mp.erase(s[low]);
                }
                low++;
                k = high - low + 1;
            }

            int len = high - low + 1;
            maxLen = max(maxLen, len);
        }
        
        if(maxLen == INT_MIN)
        {
            return 0;
        }
        return maxLen;
    }
};