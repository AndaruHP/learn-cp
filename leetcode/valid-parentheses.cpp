#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "([{}])";
    stack<char> st;
    unordered_map<char, char> mp = {
        {')', '('},
        {']', '['},
        {'}', '{'}};

    for (char c : s)
    {
        
        if (mp.find(c) == mp.end())
        {
            st.push(c);
        }
        else if (!st.empty() && mp[c] == st.top())
        {
            st.pop();
        }
        else
        {
            cout << false << endl;
        }
    }

    cout << st.empty() << endl;
}