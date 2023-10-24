#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
        m[a[i]]++;

    vector<pair<int, int>> revm(m.begin(), m.end());

    sort(revm.rbegin(), revm.rend());

    for (auto it = revm.rbegin(); it != revm.rend(); ++it) 
        cout << it->first << " " << it->second << endl;
}
