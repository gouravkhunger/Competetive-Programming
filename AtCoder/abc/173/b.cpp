// https://atcoder.jp/contests/abc173/tasks/abc173_b
// Judge Status Summary
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
    string AC = "AC", WA = "WA", TLE = "TLE", RE = "RE";
    int ac=0,wa=0,tle=0,re=0;
    FOR(i, 0, n-1) {
        string s;
        cin>>s;
        if(s==AC)ac++;
        else if(s==WA)wa++;
        else if(s==TLE)tle++;
        else if(s==RE)re++;
    }
    cout<<AC<<" x "<<ac<<"\n";
    cout<<WA<<" x "<<wa<<"\n";
    cout<<TLE<<" x "<<tle<<"\n";
    cout<<RE<<" x "<<re<<"\n";
    return 0;
}
