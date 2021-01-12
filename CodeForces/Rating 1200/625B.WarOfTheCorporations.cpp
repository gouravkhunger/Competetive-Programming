// https://codeforces.com/contest/../problem/..
//
// File Creation Date: ..-11-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  string a, b;
  cin>>a>>b;
  ll ans=0;
  auto it = a.find(b);
  while(it!=string::npos){
    ans++;
    it=a.find(b, it+b.size());
  }
  cout<<ans;
  return 0;
}
