class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string ans = "";

        for(char ch : s){
            if(ch == '*'){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(ch);
            }
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;

    }
};