class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        for(char x : s){
            mp[x]++;
        }

        string result = "";


        while(!mp.empty()){
            char maxChar;
        int maxFreq = 0;

        for(auto x : mp){
            if(x.second > maxFreq){
                maxFreq = x.second;
                maxChar = x.first;
            }
        }

        for(int i = 0; i < maxFreq; i++){
            result+=maxChar;
        }

        mp.erase(maxChar);
        }
        return result;
        



        
    }
};