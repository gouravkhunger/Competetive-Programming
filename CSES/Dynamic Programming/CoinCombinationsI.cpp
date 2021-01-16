// https://cses.fi/problemset/task/1635
// Coin Combinations I
// File Creation Date: 14-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<ll> vll;
typedef set<int> si;
typedef priority_queue<int> pq;
typedef priority_queue<int,vector<int>,greater<int>> pqs;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FORn(i, a, b) for (int i=a; i>=b; i--)
#define all(v) v.begin(), v.end()
#define allR(v) v.rbegin(), v.rend()
#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MOD = 1e9+7;
const ll INF = 1e15;

int main() {
    FIO;

    //start here

    int n, x;
    cin>>n>>x;

    vi coins(n), dp(x+1);

    FOR(i, 0, n-1) cin>>coins[i];

    dp[0] = 1;

    FOR(i, 1, x){
        dp[i] = 0;
        for(auto j:coins){
            if(i-j >= 0) {
                dp[i] += dp[i-j];
                dp[i]%=MOD;
            }
        }
    }

    cout<<dp[x];

    //end here

    return 0;
}
