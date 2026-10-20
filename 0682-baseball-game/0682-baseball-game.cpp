class Solution {
public:
    int calPoints(vector<string>& s) {
        int total = 0;
        stack<int> st;

        for(string op : s){
            if(op == "C"){
                st.pop();
            }else if(op == "D"){
                int ele = st.top();
                st.push(ele * 2);
            }else if(op == "+"){
                int first = st.top();
                st.pop();

                int second = st.top();


                st.push(first);

                st.push(first + second);
            }else{
                st.push(stoi(op));
            }
        }

        while(!st.empty()){
            total += st.top();
            st.pop();
        }
        return total;
    }
};