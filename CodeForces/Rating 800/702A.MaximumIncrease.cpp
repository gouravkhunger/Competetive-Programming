// https://codeforces.com/problemset/problem/702/A
// 702 A. Maximum Increase
// File Creation Date: 2-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n], maxl=0, count=0, prev=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>prev){
            count++;
        } else {
            count=1;
        }
        prev=a[i];
        maxl = max(count,maxl);
    }
    cout<<maxl;
    return 0;
}