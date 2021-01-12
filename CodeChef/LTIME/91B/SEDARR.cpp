// https://www.codechef.com/LTIME91B/problems/SEDARR
// Sed Sequences
// File Creation Date: 26-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int t;
    cin>>t;
    while(t--){
        int n, k, sum=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            sum+=temp;
        }
        if(sum%k==0) cout<<0<<"\n";
        else cout<<1<<"\n";
    }
    return 0;
}
