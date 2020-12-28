// https://atcoder.jp/contests/abc176/tasks/abc176_b
// Multiple of 9
// File Creation Date: 28-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    string n;
    cin>>n;
    ll sum = 0;
    FOR(i, 0, n.size()-1) {
        sum+=(n[i]-'0');
    }
    if(sum%9==0) cout<<"Yes";
    else cout<<"No";
    return 0;
}
