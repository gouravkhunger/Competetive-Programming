// https://codeforces.com/problemset/problem/59/A
// 59 A. Word
// File Creation Date: 11-Nov-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  string s;
  cin>>s;
  int l=0,u=0;
  for(int i=0;i<s.size();i++) {
    if(isupper(s[i])) u++;
    else l++;
  }
  if(l>=u){
    int i=0;
    while( s[i] ) {
      putchar(tolower(s[i]));
      i++;
    }
  }
  else{
    int i=0;
    while( s[i] ) {
      putchar(toupper(s[i]));
      i++;
    }
  }
  return 0;
}
