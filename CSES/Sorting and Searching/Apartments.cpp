// https://cses.fi/problemset/task/1084/
// Apartments
// File Creation Date: 30-Nov-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define all(v) v.begin(), v.end()
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;

    int n,m,k, aI=0, bI=0, ans=0;
    cin>>n>>m>>k;

    vi a(n), b(m);
    FOR(i, 0, n-1)cin >> a[i];
    FOR(i, 0, m-1)cin >> b[i];
    sort(all(a));
    sort(all(b));

    while(aI<n && bI<m){
        if(abs(a[aI] - b[bI]) <= k){
            ans++;
            aI++;
            bI++;
        }
        else if(a[aI] < b[bI] - k) aI++;
        else bI++;
    }

    cout<<ans;
    return 0;
}
