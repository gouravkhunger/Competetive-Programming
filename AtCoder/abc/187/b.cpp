// https://atcoder.jp/contests/abc187/tasks/abc187_b
// Gentle pairs
// File Creation Date: 6-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int n;
    cin>>n;
    vector<int> x(n), y(n);
    FOR(i, 0, n-1) cin>>x[i]>>y[i];
    int ans=0;
    FOR(i, 0, n-1){
        FOR(j, i+1, n-1){
            if(i==j) break;
            float slope = (float)(y[j]-y[i])/(float)(x[j]-x[i]);
            if(slope<=1.0&&slope>=-1.0) ans++;
        }
    }
    cout<<ans;
    return 0;
}
