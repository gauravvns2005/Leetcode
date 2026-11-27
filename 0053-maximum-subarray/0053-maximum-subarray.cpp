class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();

        int maxi = INT_MIN;


        // ===== brute force

        // for(int i = 0; i<n; i++){
        //    for(int j = i; j<n; j++){
        //     int sum = 0;
        //     for(int k = i; k<=j; k++){
        //         sum += arr[k];
        //     }
        //         maxi = max(maxi, sum);
        //    }
        // }
        // return maxi;


        // ======== prefix sum

        // for(int i = 0; i<n; i++){
        //     int sum = 0; 
        //     for(int j = i; j<n; j++){
        //         sum += arr[j];
        //         maxi = max(maxi, sum);
        //     }
        // }

        // return maxi;



        // ======= Kadane's Algorithm
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];

            maxi = max(maxi, sum);

            if(sum < 0){
                sum = 0;
            }
        }

        return maxi;
    }
};