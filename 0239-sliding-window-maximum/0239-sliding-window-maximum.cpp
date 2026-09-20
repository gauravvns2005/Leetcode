// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& arr, int k) {
//         int n = arr.size();
//         int left = 0;
//         vector<int>ans;

//         for(int right = 0; right < n; right++){
//             if(right - left + 1 == k)
//             {
//                 int maxi = arr[left];

//                 for(int i = left; i <=right; i++){
//                     maxi = max(maxi, arr[i]);
//                 }
//                 ans.push_back(maxi);
//                 left++;
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {

        int n = arr.size();
        vector<int> ans;

        priority_queue<pair<int, int>> pq;

        for(int right = 0; right < n; right++) {

            // value + index
            pq.push({arr[right], right});

            // Remove elements outside window
            while(!pq.empty() && pq.top().second <= right - k) {
                pq.pop();
            }

            // Window size >= k
            if(right >= k - 1) {
                ans.push_back(pq.top().first);
            }
        }

        return ans;
    }
};