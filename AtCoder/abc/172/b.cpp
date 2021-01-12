// https://atcoder.jp/contests/abc172/tasks/abc172_b
// Minor change
// File Creation Date: 6-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    string s, t;
    cin>>s>>t;
    int ans=0;
    FOR(i, 0, s.size()-1) if(s[i]!=t[i])ans++;
    cout<<ans;
    return 0;
}
