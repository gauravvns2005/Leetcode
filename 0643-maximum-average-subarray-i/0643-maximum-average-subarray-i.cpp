class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();

        int sum = 0;

        for(int i = 0; i<k; i++)
        {
            sum += arr[i];
        }

        double maxAvg = (double)sum/k;

        for(int i = k; i<n; i++)
        {
            sum += arr[i];
            sum -= arr[i-k];
            
            double avg = (double)sum/k;

            maxAvg = max(maxAvg, avg);
        }

        return maxAvg;
    }
};