#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    // stack is LIFO, last in first out, so the last element that we push will be the first element that we pop
    st.push(1);    // {1}
    st.push(2);    // {1, 2}
    st.emplace(3); // {1, 2, 3}

    cout << st.top() << endl;  // 3
    st.pop();                  // {1, 2}
    cout << st.size() << endl; // 2
}