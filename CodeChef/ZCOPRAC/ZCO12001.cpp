// https://www.codechef.com/ZCOPRAC/problems/ZCO12001
// Matched Brackets
// File Creation Date: 21-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int s1=0, s2=0, depth=0, pos=0, size=0, sizepos=0;

    for(int i=0;i<n;i++) {
        if(a[i]==1) s1++;
        else s2++;
        if(abs(s1-s2)>depth) {
            pos=(i+1);
            depth++;
        }
        if (s1 == s2){
            if (s1+s2 > size) {
                size = (s1+s2);
                sizepos = i-size+2;
            }
            s1 = s2 = 0;
        }
    }

    cout<<depth<<" "<<pos<<" "<<size<<" "<<sizepos;
    return 0;
}