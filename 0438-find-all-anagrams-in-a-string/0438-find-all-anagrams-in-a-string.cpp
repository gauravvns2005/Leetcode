class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = p.size();
        int m = s.size();

        if(n > m)
        {
            return ans;
        }

        unordered_map<char, int>mp;
        unordered_map<char, int>window;

        // freq of p
        for(char x : p)
        {
            mp[x]++;
        }

        // first window
        for(int i = 0; i<n; i++)
        {
            window[s[i]]++;
        }


        // check first window
        if(window == mp)
        {
            ans.push_back(0);
        }


        // sliding window
        for(int i = n; i<m; i++)
        {
            window[s[i]]++;     //add next char

            window[s[i-n]]--;   // remove first char


            // remove char whose freq is now 0
            if(window[s[i-n]] == 0)
            {
                window.erase(s[i-n]);
            }

            // check current window
            if(window == mp)
            {
                ans.push_back(i-n+1);
            }
        }
        return ans;
    }
};































