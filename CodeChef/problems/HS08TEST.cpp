// https://www.codechef.com/problems/HS08TEST
// ATM
// File Creation Date: 27-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int x;
    float y;
    cin>>x>>y;
    if(x%5==0&&x+0.5<y) cout<<fixed<<setprecision(2)<<y-(x+0.5);
    else cout<<fixed<<setprecision(2)<<y;
    return 0;
}