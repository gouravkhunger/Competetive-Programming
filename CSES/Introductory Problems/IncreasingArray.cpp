// https://cses.fi/problemset/task/1094
// Increasing Array
// File Creation Date: 27-Nov-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, ans=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        if(i>0) {
            if(a[i]<a[i-1]){
                ans+=(a[i-1]-a[i]);
                a[i]=a[i-1];
            }
        }
    }
    cout<<ans;
    return 0;
}