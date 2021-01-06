// https://atcoder.jp/contests/abc171/tasks/abc171_b
// Mix Juice
// File Creation Date: 4-Jan-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define all(v) v.begin(), v.end()
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int n, k;
    cin>>n>>k;
    vector<int> p(n);
    FOR(i, 0, n-1) cin>>p[i];
    sort(all(p));
    int sum=0;
    FOR(i, 0, k-1)sum+=p[i];
    cout<<sum;
    return 0;
}
