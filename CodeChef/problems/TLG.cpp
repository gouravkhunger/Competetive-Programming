// https://www.codechef.com/problems/TLG
// The Lead Game
// File Creation Date: 27-Nov-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ansP=0, ansL=0; cin>>n;
    int s[n], t[n], prefixS[n], prefixT[n];
    vector<pair<int, int>> l[n];
    for(int i=0;i<n;i++) {
        cin >> s[i] >> t[i];
        prefixS[0] = s[0];
        prefixT[0] = t[0];
        if (i > 0) {
            prefixS[i] = s[i] + prefixS[i - 1];
            prefixT[i] = t[i] + prefixT[i - 1];
        }
        if(abs(prefixS[i]-prefixT[i])>ansL){
            ansL=abs(prefixS[i]-prefixT[i]);
            ansP=(prefixS[i]>prefixT[i])?1:2;
        }
    }
    cout<<ansP<<" "<<ansL;
    return 0;
}