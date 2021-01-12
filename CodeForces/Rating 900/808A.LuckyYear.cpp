// https://codeforces.com/problemset/problem/808/A
// Lucky Year
// File Creation Date: 21-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int firstDigit(int x){
    while(x>=10)x/=10;
    return x;
}

int main() {
    FIO;
    int ans=0;
    string n;
    cin>>n;
    if(n.size()==1)ans=1;
    else {
        int cur=0, temp=0;
        stringstream test(n);
        test>>cur;
        int f = firstDigit(cur);
        temp = pow(10, n.size()-1);
        temp*=(f+1);
        ans=temp-cur;
    }
    cout<<ans;
    return 0;
}
