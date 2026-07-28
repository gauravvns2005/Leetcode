class Solution {
public:
    int thirdMax(vector<int>& arr) {
        int n = arr.size();

        int count = 1;

        sort(arr.begin(), arr.end());

        for(int i = n-2; i>=0; i--)
        {
            if(arr[i] != arr[i+1])
            {
                count++;

                if(count == 3){
                    return arr[i];
                }
            }
        }

        return arr[n-1];
    }
};