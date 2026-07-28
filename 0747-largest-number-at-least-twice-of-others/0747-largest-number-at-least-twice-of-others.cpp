class Solution {
public:
    int dominantIndex(vector<int>& arr) {
        int n = arr.size();

        int larg = INT_MIN, maxIdx;

        for(int i = 0; i<n; i++)
        {
            if(arr[i] > larg){
                larg = arr[i];
                maxIdx = i;
            }
        }

        for(int i = 0; i<n; i++){
            if(arr[i] != larg && larg < arr[i]*2){
                return -1;
            }
        }

        return maxIdx;
    }
};