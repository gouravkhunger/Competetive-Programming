// https://atcoder.jp/contests/abc174/tasks/abc174_b
// Distance
// File Creation Date: 6-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int n, d, ans=0;
    cin>>n>>d;
    FOR(i, 0, n-1) {
        ll x, y;
        cin>>x>>y;
        ll dis = (x*x)+(y*y);
        if(dis<=((ll)d*(ll)d)) ans++;
    }
    cout<<ans;

    return 0;
}
