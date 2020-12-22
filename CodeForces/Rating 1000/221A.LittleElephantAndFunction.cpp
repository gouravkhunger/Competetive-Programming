// https://codeforces.com/contest/221/problem/A
// 221 A. Little Elephant and Function
// File Creation Date: 11-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=1;i<=n;i++) a[i-1]=i;

    cout<<a[n-1]<<" ";
    for(int i=1;i<n;i++) cout<<a[i-1]<<" ";
    return 0;
}
