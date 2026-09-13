class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();

        int left = 0;
        int sum = 0;
        int res = INT_MAX;

        for(int right = 0; right < n; right++){
            sum += arr[right];


            while(sum >= target){
                res = min(res, right - left + 1);
                sum -= arr[left];
                left++;


            }
        }

        return res == INT_MAX ? 0 : res;
    }
};