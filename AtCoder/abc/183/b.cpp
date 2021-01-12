// https://atcoder.jp/contests/abc183/tasks/abc183_b
// Billiards
// File Creation Date: 28-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    double sx, sy, gx, gy;
    cin>>sx>>sy>>gx>>gy;
    double ans = ((double)((sy*gx)+(gy*sx)))/(sy+gy);
    cout << fixed << setprecision(15) << ans << endl;
    return 0;
}