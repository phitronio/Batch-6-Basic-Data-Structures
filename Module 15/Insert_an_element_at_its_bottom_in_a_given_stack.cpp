// Problem link: https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    stack<int> new_st;
    while(!st.empty())
    {
        new_st.push(st.top());
        st.pop();
    }
    st.push(x);
    while(!new_st.empty())
    {
        st.push(new_st.top());
        new_st.pop();
    }
    return st;
}
