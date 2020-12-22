// https://codeforces.com/contest/1144/problem/A
// Diverse Strings
// File Creation Date: 22-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define all(v) v.begin(), v.end()
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int n;
    cin >> n;
    FOR(i, 0, n - 1) {
        string s;
        cin >> s;
        sort(all(s));
        multiset<int> freq;
        bool flag = false;
        if (s.size() == 1) flag = true;
        else {
            FOR(j, 0, s.size() - 2) {
                char cur = s[j];
                freq.insert(cur);
                cur++;
                if (s[j + 1] - s[j] == 1) flag = true;
                else {
                    flag = false;
                    break;
                }
            }
            for (auto a:freq)
                if (freq.count(a) > 1) {
                    flag = false;
                    break;
                }
        }
        if (flag)cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}