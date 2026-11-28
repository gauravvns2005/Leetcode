class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int n = arr.size();
        int count = 0;

        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(arr[i] + arr[j] < target){
                    count++;
                }
            }
        }

        return count;
    }
};