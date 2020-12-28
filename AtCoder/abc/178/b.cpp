// https://atcoder.jp/contests/abc178/tasks/abc178_b
// Product Max
// File Creation Date: 28-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;

    ll a, b, c, d;
    cin>>a>>b>>c>>d;

    cout<<max({a*c, a*d, b*c, b*d});

    return 0;
}
