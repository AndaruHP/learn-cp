#include <bits/stdc++.h>

using namespace std;

int main()
{
    // set is a sorted container that contains unique elements
    set<int> st;
    st.insert(5);  // {5}
    st.insert(3);  // {3, 5}
    st.insert(5);  // {3, 5} (duplicate, ignored)
    st.insert(7);  // {3, 5, 7}
    st.emplace(4); // {3, 4, 5, 7}

    auto it = st.find(5); // it points to 5
    cout << *it << endl;
    st.erase(it); // {3, 4, 7}

    int cnt = st.count(5); // 0 (5 is not in the set)

    st.insert(2);  // {2, 3, 4, 7}
    auto it1 = st.find(3);
    auto it2 = st.find(7);
    st.erase(it1, it2); // {2, 7} (erases elements from 3 to 7, excluding 7)

    set<int> st2 = {1, 2, 4, 4, 4, 5, 6};
    auto lb = st2.lower_bound(4); // points to the first 4 in index 2
    auto ub = st2.upper_bound(4); // points to the first element greater than 4, which is 5 in index 5
    auto lb2 = st2.lower_bound(3); // points to the first element greater than or equal to 3, which is 4 in index 2
    auto ub2 = st2.upper_bound(6); // points to the first element greater than 6, which is end() since 6 is the largest element

}