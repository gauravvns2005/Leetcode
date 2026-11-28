class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int n = arr.size();
        long long count = 0;

        // ==== Brute Force===
        // for(int i = 0; i<n; i++){
        //     for(int j = i+1; j<n; j++){
        //         if(arr[i] + arr[j] < target){
        //             count++;
        //         }
        //     }
        // }

        // return count;



        // two pointer =======
        sort(arr.begin(), arr.end());
        
        int left = 0;
        int right = n-1;

        while(left < right){
            if(arr[left] + arr[right] < target){
                count += right - left;
                left++;
            }
            else{
                right--;
            }
        }

        return count;
    }
};