// http://www.usaco.org/index.php?page=viewproblem2&cpid=567
// Fence Painting
// File Creation Date: 8-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d; cin>>a>>b; cin>>c>>d;
    bool paint[100]={false};
    for(int i=a;i<b;i++) paint[i]=true;
    for(int i=c;i<d;i++) paint[i]=true;
    int ans=0;
    for(int i=0; i<100; i++) if(paint[i])ans++;
    cout<<ans;
    return 0;
}