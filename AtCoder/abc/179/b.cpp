// https://atcoder.jp/contests/abc179/tasks/abc179_b
// Go to Jail
// File Creation Date: 28-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;

    int n;
    bool flag = false;
    cin >> n;
    int d[n][2];

    FOR(i, 0, n - 1) cin>>d[i][0]>>d[i][1];

    FOR(i, 0, n-2){
        if(d[i][0]==d[i][1] && d[i+1][0]==d[i+1][1] && d[i+2][0]==d[i+2][1]) {
            flag = true;
            break;
        }
    }
    cout<<((flag)?"Yes":"No");
    return 0;
}
