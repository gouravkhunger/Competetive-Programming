// https://cses.fi/problemset/task/1083
// Missing Numbers
// File Creation Date: 27-Nov-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, givenSum=0;
    cin>>n;
    ll actualSum=n;
    while(--n){
        ll temp;
        cin>>temp;
        givenSum+=temp;
        actualSum+=n;
    }
    cout<<actualSum-givenSum;
    return 0;
}
