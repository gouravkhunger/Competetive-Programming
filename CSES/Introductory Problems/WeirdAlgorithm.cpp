// https://cses.fi/problemset/task/1068
// Weird Algorithm
// File Creation Date: 27-Nov-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    cout<<n<<" ";
    while (n!=1) {
        if(n%2==0) n/=2;
        else n=(n*3)+1;
        cout<<n<<" ";
    }
    return 0;
}