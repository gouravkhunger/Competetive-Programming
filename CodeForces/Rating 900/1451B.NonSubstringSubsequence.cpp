// https://codeforces.com/contest/1451/problem/B
// Non-Substring Subsequence
// File Creation Date: 22-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;

    int t;
    cin>>t;
    while(t--){
        int n,q;
        string s;
        cin>>n>>q;
        cin>>s;
        FOR(i, 1, q) {
            int l, r;
            cin>>l>>r;
            l--;r--;
            string sub = s.substr(l, r);
            bool bad=true;
            for(int j = 0; j < l and bad; j++)
                if(s[j] == s[l]) bad = false;
            for(int j = r+1; j < n and bad; j++)
                if(s[j] == s[r]) bad = false;
            if(bad)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}
