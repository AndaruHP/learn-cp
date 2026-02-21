#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    // as we can see the push_back need to define what kind of pair we want to push, while the emplace_back can directly push the value without defining the type of pair.
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int> v1(5, 100);
    // the vector has 5 elements and all of them are 100

    vector<int> v2(5);
    // the vector has 5 elements but they are not initialized, so they can be any value

    vector<int> v3(v1);
    // the vector v3 is a copy of v1, so it has 5 elements

    vector<int>::iterator it = v1.begin();
    it++;
    cout << *it << endl;
    // the iterator it points to the second element of the vector v1, which is 100

    vector<int> vc = {4, 5, 7, 9, 3};

    vector<int>::iterator it1 = vc.begin();
    cout << *it1 << endl;
    it1 += 2;
    cout << *it1 << endl;

    cout << vc.front() << " " << vc.back() << endl;

    vc.erase(vc.begin());
    for (int i : vc)
    {
        cout << i << " ";
    }

    vc.erase(vc.begin() + 2, vc.end());
    // erase (start, end)
    cout << endl;
    for (int i : vc)
    {
        cout << i << " ";
    }

    cout << endl;

    vector<int> v4(2, 100);
    v4.insert(v4.begin(), 300);
    v4.insert(v4.begin() + 1, 2, 10);

    vector<int> v5 = {20, 40};
    vector<int> v6 = {70, 90};
    v5.swap(v6);
    cout << v5.empty() << endl;
    // boolean return

    v5.clear();
    cout << v5.empty() << endl;
}