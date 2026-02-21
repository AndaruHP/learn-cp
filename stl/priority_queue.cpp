#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(5);    // {5}
    pq.push(3);    // {5, 3}
    pq.push(7);    // {7, 5, 3}
    cout << pq.top() << endl; // 7
    pq.pop();                 // {5, 3}
    cout << pq.top() << endl; // 5

    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5);    // {5}
    min_pq.push(3);    // {3, 5}
    min_pq.push(7);    // {3, 5, 7}
    cout << min_pq.top() << endl; // 3
}