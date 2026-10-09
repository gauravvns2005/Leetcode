class Solution {
public:

string expand(string &s, int left, int right) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }
    
    string longestPalindrome(string s) {
        string ans = "";
        
        for (int i = 0; i < s.size(); i++) {
            // Odd length palindrome
            string p1 = expand(s, i, i);
            
            // Even length palindrome
            string p2 = expand(s, i, i + 1);
            
            if (p1.size() > ans.size()) ans = p1;
            if (p2.size() > ans.size()) ans = p2;
        }
        
        return ans;
    }
};