class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> ans(n,0);

        for(int i = 0; i<n; i++){

            while(!st.empty() && arr[st.top()] < arr[i]){
                int prevIdx = st.top();
                ans[prevIdx] = i - prevIdx;
                st.pop();
            }

            st.push(i);
        }


        return ans;
    }
};