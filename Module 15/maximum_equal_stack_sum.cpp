// Problem link: https://www.codingninjas.com/studio/problems/maximum-equal-stack-sum_1062571

#include <bits/stdc++.h> 
int getsum(stack<int> st)
{
    int sum = 0;
    while(!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    return sum;
}
int maxSum(stack<int> &st1, stack<int> &st2, stack<int> &st3) {
    int sum1 = getsum(st1);
    int sum2 = getsum(st2);
    int sum3 = getsum(st3);

    while(true)
    {
        if(sum1 == sum2 && sum2 == sum3)
            break;
        if(sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= st1.top();
            st1.pop();
        }
        else if(sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= st2.top();
            st2.pop();
        }
        else
        {
            sum3 -= st3.top();
            st3.pop();
        }
    }
    return sum1;
}