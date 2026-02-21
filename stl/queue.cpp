#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    // queue is reverse of stack, it is FIFO, first in first out, so the first element that we push will be the first element that we pop
    q.push(1);    // {1}
    q.push(2);    // {1, 2}
    q.emplace(3); // {1, 2, 3}

    q.back() += 3;
    cout << q.back() << endl;  // 6
    cout << q.front() << endl; // 1
    q.pop();                   // {2, 6}
    cout << q.front() << endl; // 2
}