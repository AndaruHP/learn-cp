#include <bits/stdc++.h>
using namespace std;

int main()
{
    // map has two template parameters, the first one is the key type and the second one is the value type
    // key is unique and value can be duplicate

    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2;
    mpp.emplace(3, 10);
    mpp.insert({2, 4});
    mpp[2] = 3; // Overwrites the value of key 2
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    auto it = mpp.find(2);
    cout << it->second << endl; // This will print the value associated with key 2, which is 3
}