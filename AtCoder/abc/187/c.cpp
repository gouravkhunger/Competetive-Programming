// https://atcoder.jp/contests/abc187/tasks/abc187_c
// 1-SAT
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
    vector<string> a(n);
    set<string> s;
    FOR(i, 0, n-1) {
        cin>>a[i];
        s.insert(a[i]);
    }
    for(string& x:a) {
        if(s.count("!"+x)){
            cout<<x;
            return 0;
        }
    }
    cout<<"satisfiable";
    return 0;
}
