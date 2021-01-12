// https://cses.fi/problemset/task/1633
// Dice Combinations
// File Creation Date: 3-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
#define MOD 1000000007
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int> dp(1e6+1, 0);

int solve(int n){
    dp[0]=1;
    if(n<0) return 0;
    if(dp[n]!=0) return dp[n];
    for (int i = 1; i <= n; i++) {
        for (auto j : {1,2,3,4,5,6}) {
            if (i-j >= 0) {
                dp[i] += dp[i-j];
                dp[i] %= MOD;
            }
        }
    }
    return dp[n];
}

int32_t main() {
    FIO;
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}