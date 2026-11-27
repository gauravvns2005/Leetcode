class Solution {
public:
    int maxProduct(vector<int>& arr) {
       int n = arr.size();
       int maxPro = arr[0];
       int minPro = arr[0];
        int ans = arr[0];
       

       for(int i = 1; i<n; i++){

            if(arr[i] < 0){
                swap(maxPro, minPro);
            }
            maxPro = max(arr[i], maxPro * arr[i]);
            minPro = min(arr[i], minPro * arr[i]);

            ans = max(maxPro, ans);
       }

       return ans;

    }
};