class Solution {
public:
    int rob(vector<int>& arr) {
        // int prev2 = 0;
        // int prev1 = 0;

        // for(int money : nums){
        //     int curr = max(prev1, prev2+ money);

        //     prev2 = prev1;
        //     prev1 = curr; 
        // }

        // return prev1;

        int n = arr.size();

        if(n == 1){
            return arr[0];
        }

        vector<int> dp(n);

        dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);


        for(int i = 2; i<n; i++){
            dp[i] = max(dp[i-1], dp[i-2] + arr[i]);
        }

        return max(dp[n-1], dp[n-2]);

    }
};