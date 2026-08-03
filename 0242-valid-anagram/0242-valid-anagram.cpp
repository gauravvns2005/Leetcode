class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length() != t.length()) return false;

        // vector<int> count(26,0);

        // for(char c : s)
        // {
        //     count[c - 'a']++;
        // }

        // for(char c : t)
        // {
        //     count[c - 'a']--;
        // }

        // for(int i=0;i<26; i++)
        // {
        //     if(count[i] != 0)
        //     {
        //         return false;
        //     }
        // }

        // return true;


        // ========= using hashmap ==========
        unordered_map<char, int> mp1; 
        unordered_map<char, int> mp2;

        if(s.length() != t.length()) return false;

        for(char ch1 : s)
        {
            mp1[ch1]++;
        }

        for(char ch2 : t){
            mp2[ch2]++;
        }

        if(mp1 == mp2)
        {
            return true;
        }

        return false;
    }
};