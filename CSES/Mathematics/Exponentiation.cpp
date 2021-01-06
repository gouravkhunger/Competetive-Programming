// https://cses.fi/problemset/task/1095/
// Exponentiation
// File Creation Date: 5-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define MOD int(1e9+7)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll binpow(ll a, ll b) {
    if(b==0) return 1;
    if(b==1) return a;
    ll result = binpow(a, b/2);
    if(b%2==0) return (result*result)%MOD;
    else return (((result*result)%MOD)*a)%MOD;
}

int main() {
    FIO;
    int t;
    cin>>t;
    while(t--) {
        ll a, b;
        cin>>a>>b;
        cout<<binpow(a, b)<<"\n";
    }
    return 0;
}