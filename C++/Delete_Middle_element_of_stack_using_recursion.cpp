#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &st, int k)
{
    // Base condition
    if (st.size() == k)
    {
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st, k);
    st.push(temp);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int k = st.size() / 2 + 1;
    solve(st, k);
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}