// https://codeforces.com/contest/1451/problem/A
// 1451 A. Subtract or Divide
// File Creation Date: 23-11-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n, ans=0;
    cin>>n;
    while(n>1){
      if(n==2){n--;ans++;}
      else if(n==3){n--;ans++;}
      else if(n%2==0){n/=(n/2);ans++;}
      else if(n%3==0){n/=(n/3);ans++;}
      else {n--;ans++;}
    }
    cout<<ans<<"\n";
  }
	return 0;
}
