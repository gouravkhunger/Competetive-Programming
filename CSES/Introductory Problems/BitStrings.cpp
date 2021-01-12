// https://cses.fi/problemset/task/1617
// Bit Strings
// File Creation Date: 2-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 1e9+7;

ll binpow(ll a, ll b) {
    if (b == 0) return 1;
    ll res = binpow(a, b / 2);
    if (b % 2) return (res * res * a)%MOD;
    else return (res * res)%MOD;
}

int main() {
    FIO;
    int n;
    cin>>n;
    cout<<binpow(2, n);
    return 0;
}
