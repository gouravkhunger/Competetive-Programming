// https://www.codechef.com/ZCOPRAC/problems/ZCO20001
// Weird Ordering
// File Creation Date: 21-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int p,idx, ans=0;
        cin>>p>>idx;
        while (p--){
            if (idx%2==1) ans = ans * 2 + 1;
            else ans = ans * 2;
            idx/=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}