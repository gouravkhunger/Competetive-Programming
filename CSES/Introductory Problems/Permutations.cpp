// https://cses.fi/problemset/task/1070/
// Permutations
// File Creation Date: 2-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int n;
    cin >> n;
    string nos = "NO SOLUTION";
    if (n > 1 && n < 4) {
        cout << nos;
    } else {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
    return 0;
}
