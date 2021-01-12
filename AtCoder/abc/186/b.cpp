// https://atcoder.jp/contests/abc186/tasks/abc186_b
// Blocks on Grid
// File Creation Date: 28-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int h, w, smallest=INT_MAX;
    cin>>h>>w;
    int a[h][w];

    FOR(i, 0, h-1)
        FOR(j, 0, w-1){
            cin>>a[i][j];
            smallest = min(smallest, a[i][j]);
        }

    int ans=0;

    FOR(i, 0, h-1)
        FOR(j, 0, w-1){
            if(a[i][j]!=smallest) ans+=(a[i][j]-smallest);
        }

    cout<<ans;
    return 0;
}
