// https://cses.fi/problemset/task/1069
// Repetitions
// File Creation Date: 27-Nov-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    string s;
    cin>>s;
    ll len = s.length(), ans=0, temp=0;
    for(ll i=1;i<len;i++){
        if(s[i]==s[i-1]) {
            temp++;
            if(temp>ans) ans=temp;
        }
        else temp=0;
    }
    cout<<ans+1; // settle 1 value not count
    return 0;
}