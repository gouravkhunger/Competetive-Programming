// https://atcoder.jp/contests/abc186/tasks/abc186_c
// Unlucky 7
// File Creation Date: 28-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool A(int a , int b){
    for( ; a ; a /= b){
        if(a % b == 7) return false;
    }
    return true;
}

int main() {
    FIO;
    int x, ans=0;
    cin >> x;
    for(int i = 1 ; i <= x ; i++){
        if(A(i , 10) && A(i , 8)) ans++;
    }
    cout << ans;

    return 0;
}