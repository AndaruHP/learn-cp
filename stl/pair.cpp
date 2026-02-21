#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> a = {1, {2, 4}};
    cout << a.first << " " << a.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {1, 3}, {4, 7}};
    cout << arr[0].second << " " << arr[1].first << " " << arr[2].second;
}