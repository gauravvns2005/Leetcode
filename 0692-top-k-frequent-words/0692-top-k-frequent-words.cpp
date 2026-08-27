class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;

        // frequency of words
        for(string x : words)
        {
            mp[x]++;
        }

        // push unique word in vector
        vector<string> v;

        for(auto it : mp)
        {
            v.push_back(it.first);
        }

        // sort 
        sort(v.begin(), v.end(), [&](string a, string b){
            if(mp[a] == mp[b]){
                return a < b;       /// alphabtical order
            }

            return mp[a] > mp[b];       // higher frequency first
        });

        // first k word
        vector<string> ans;
        for(int i = 0; i<k; i++)
        {
            ans.push_back(v[i]);
        }

        return ans;
    }
};