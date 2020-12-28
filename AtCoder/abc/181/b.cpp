// https://atcoder.jp/contests/abc181/tasks/abc181_b
// Trapezoid Sum
// File Creation Date: 28-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;

    ll n, sum=0;
    cin>>n;

    FOR(i, 1, n){
        ll a, b;
        cin>>a>>b;
        sum+= (b*(b+1))/2 - (a*(a-1))/2;
    }
    cout<<sum;

    return 0;
}
