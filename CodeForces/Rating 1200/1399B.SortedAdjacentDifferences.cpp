// https://codeforces.com/contest/1339/problem/B
// 1339 B. Sorted Adjacent Differences
// File Creation Date: 2-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        if(n%2)cout<<a[n/2]<<endl;
        for(int i=n/2-1;i>=0;i--)cout<<a[n-i-1]<<" "<<a[i]<<" ";
        cout << "\n";
    }

    return 0;
}
