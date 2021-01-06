// https://atcoder.jp/contests/abc187/tasks/abc187_a
// Large Digits
// File Creation Date: 6-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int S(string n) {
    int sum = 0;
    for(int i=0;i<n.size();i++){
        sum+=(n[i]-'0');
    }
    return sum;
}

int main() {
    string a, b;
    cin>>a>>b;
    cout<<max(S(a), S(b));
    return 0;
}