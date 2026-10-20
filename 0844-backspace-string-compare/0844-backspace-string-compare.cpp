class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1, s2;

        for(char ch: s){
            if(ch == '#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }else{
                s1.push(ch);
            }
        }


        for(char ch: t){
            if(ch == '#'){
                if(!s2.empty()){
                    s2.pop();
                }
            }else{
                s2.push(ch);
            }
        }


        // size compare karenge
        if(s1.size() != s2.size()) return false;


        // stack ka top element compare karenge ki same hai kya nhi
        while(!s1.empty()){
            if(s1.top() != s2.top()){
                return false;
            }

            s1.pop();       // if top element same hai to usko stack se remove kar denge taki next element compare kar sake
            s2.pop();       // if top element same hai to usko stack se remove kar denge taki next element compare kar sake
        }

        return true;
    }
};

























