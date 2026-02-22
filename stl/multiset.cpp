#include<bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(5);  // {5}
    ms.insert(3);  // {3, 5}
    ms.insert(5);  // {3, 5, 5} (duplicate allowed)
    ms.insert(7);  // {3, 5, 5, 7}

    ms.erase(5); // erases all occurrences of 5, resulting in {3, 7}

    ms.insert(3); // {3, 3, 7}
    ms.erase(ms.find(3)); // erases one occurrence of 3, resulting in {3, 7}

    ms.insert(4); // {3, 4, 7}
    ms.insert(4); // {3, 4, 4, 7}

    ms.erase(ms.find(3), ms.find(4)); // erases elements from 3 to 4 (excluding 4), resulting in {4, 4, 7}

    // there is one more set, which is unordered_set, it's like set but in unordered manner but unique
}