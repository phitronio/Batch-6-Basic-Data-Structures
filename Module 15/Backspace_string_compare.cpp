// Problem link: https://leetcode.com/problems/backspace-string-compare/description/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char> st;
       for(char c : s)
       {
            if(c == '#')
            {
                if(!st.empty())
                    st.pop();
            }
            else
                st.push(c);
       }
       
       stack<char> st2;
       for(char c : t)
       {
            if(c == '#')
            {
                if(!st2.empty())
                    st2.pop();
            }
            else
                st2.push(c);
       }

       return st == st2;
    }
};