// https://cses.fi/problemset/task/1712
// Exponentiation II
// File Creation Date: 5-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


ll binpow(ll a, ll b, ll mod) {
    if(b==0) return 1;
    if(b==1) return a;
    ll result = binpow(a, b/2, mod);
    if(b%2==0) return (result*result)%mod;
    else return (((result*result)%mod)*a)%mod;
}

int main() {
    FIO;
    int t;
    cin>>t;
    while(t--) {
        ll a, b, c;
        cin>>a>>b>>c;
        ll y = binpow(b, c, ll(1e9+6));
        cout<<binpow(a, y, ll(1e9+7))<<"\n";
    }
    return 0;
}