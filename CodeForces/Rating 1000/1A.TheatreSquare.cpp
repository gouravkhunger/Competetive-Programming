// https://codeforces.com/contest/1/problem/A
// 1 A. Theatre Square
// File Creation Date: 6-Jan-2021
// Author: Gourav(https://github.com/GouravKhunger)
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
	FIO;
	int n, m, a;
	cin>>n>>m>>a;
	n=ceil((double)n/a);
	m=ceil((double)m/a);
	cout<<(ll)n*m;
	return 0;
}