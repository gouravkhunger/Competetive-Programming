// https://codeforces.com/problemset/problem/1300/A
// 1300 A. Non-zero
// File Creation Date: <date>
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define all(v) v.begin(), v.end()
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int t;
    cin>>t;
    while(t--){
        int n, ans=0, sum=0;
        cin>>n;
        vector<int> a(n);
        FOR(i, 0, n-1) cin>>a[i];
        auto zero = find(all(a), 0);
        while(zero<a.end()&&zero>=a.begin()){
            a[zero-a.begin()]++;
            ans++;
            zero = find(all(a), 0);
        }
        FOR(i, 0, n-1) {
            sum+=a[i];
        }
        if(sum==0){
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
