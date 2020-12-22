// https://codeforces.com/contest/1176/problem/A
// Divide it!
// File Creation Date: 12-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main() {
    FIO

    int q;
    cin>>q;
    while(q--){
        int n, ans=0;
        cin>>n;
        while(n!=1){
            if(n%5==0) {n = (4*n)/5;ans++;}
            else if(n%3==0) {n = (2*n)/3;ans++;}
            else if(n%2==0) {n /= 2;ans++;}
            else {ans=-1;break;}
        }
        cout<<ans<<"\n";
    }
}