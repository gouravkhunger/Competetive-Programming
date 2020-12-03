// https://cses.fi/problemset/task/1634
// Minimizing Coins
// File Creation Date: 3-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
#define INF 1e9

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int> coins;
vector<int> value(1e6+5, INF);

int solve(int x){
    if(x<0) return INF;
    value[0] = 0;
    if(value[x]!=INF) return value[x];
    int ans=INF;
    for (auto c : coins) {
        ans = min(ans, solve(x-c)+1);
    }
    value[x]=ans;
    return (ans == INF ? -1 : value[x]);
}

int32_t main() {
    FIO;
    int n,x;
    cin>>n>>x;
    coins.resize(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    cout<<solve(x);
    return 0;
}