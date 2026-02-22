#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string prefix = strs[0];
    for (string s: strs) {
        while (s.find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
        }
    }
    cout << prefix << endl;
}