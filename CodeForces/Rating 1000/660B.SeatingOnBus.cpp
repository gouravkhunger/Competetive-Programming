// https://codeforces.com/problemset/problem/660/B
// 660 B. Seating on Bus
// File Creation Date: 5-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int n, m;
    cin>>n>>m;
    int a[n][4];
    memset(a, 0, sizeof a);
    for(int i=1, j=0;i<=m && j<n;i+=2, j++) {
        a[j][0]=i;
        a[j][3]=i+1;
    }
    for(int i=(2*n)+1, j=0;i<=m && j<n;i+=2, j++) {
        a[j][1]=i;
        a[j][2]=i+1;
    }
    FOR(i, 0, n-1){
        if(a[i][1]!=0&&a[i][1]<=m) cout<<a[i][1]<<" ";
        if(a[i][0]!=0&&a[i][0]<=m) cout<<a[i][0]<<" ";
        if(a[i][2]!=0&&a[i][2]<=m) cout<<a[i][2]<<" ";
        if(a[i][3]!=0&&a[i][3]<=m) cout<<a[i][3]<<" ";
    }
    return 0;
}
