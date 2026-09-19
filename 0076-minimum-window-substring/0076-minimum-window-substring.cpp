class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;

        for(char c : t) {
            need[c]++;
        }

        unordered_map<char, int> window;

        int left = 0;
        int have = 0;
        int required = t.size();

        int minLen = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.size(); right++) {

            char c = s[right];

            window[c]++;

            // This character is actually contributing
            if(need.count(c) && window[c] <= need[c]) {
                have++;
            }

            // Window is valid
            while(have == required) {

                // Update answer
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];

                window[leftChar]--;

                // Removing this character made window invalid
                if(need.count(leftChar) &&
                   window[leftChar] < need[leftChar]) {
                    have--;
                }

                left++;
            }
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};