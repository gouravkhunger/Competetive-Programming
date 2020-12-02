// https://codeforces.com/problemset/problem/982/A
// Row
// File Creation Date: <date>
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int t;
    cin>>t;
    string n;
    cin>>n;
    auto one = n.find("11");
    auto zero = n.find("000");
    if(one!=string::npos||zero!=string::npos){
        cout<<"NO";
    } else {
        if(n=="0")cout<<"NO";
        else if(n=="1") cout<<"YES";
        else if(n.substr(n.length()-2, n.length()-1)=="00")cout<<"NO";
        else if(n.substr(0, 2)=="00")cout<<"NO";
        else cout << "YES";
    }
    return 0;
}