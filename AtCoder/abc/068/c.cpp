// https://atcoder.jp/contests/arc079/tasks/arc079_a
// Cat Snuke and a Voyage
// File Creation Date: 4-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()

bool check(int i, vector<vector<int>> a) {
    int count = INT_MAX;
    vector<int> one = a[1];
    if (find(all(one), i) != one.end()) count = 0;
    else {
        for (auto x : one) {
            if (find(all(a[x]), i) < a[x].end()) {
                count = 0;
                break;
            }
        }
    }
    return count == 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    check(n, a) ? cout << "POSSIBLE" : cout << "IMPOSSIBLE";
    return 0;
}
