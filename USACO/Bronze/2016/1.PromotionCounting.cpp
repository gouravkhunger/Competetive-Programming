// http://www.usaco.org/index.php?page=viewproblem2&cpid=591
// Promotion Counting
// File Creation Date: 8-Dec-2020
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int bronzeBefore, bronzeAfter;
    int silverBefore, silverAfter;
    int goldBefore, goldAfter;
    int platinumBefore, platinumAfter;
    cin>>bronzeBefore>>bronzeAfter;
    cin>>silverBefore>>silverAfter;
    cin>>goldBefore>>goldAfter;
    cin>>platinumBefore>>platinumAfter;
    int bronzeToSilver = silverAfter - silverBefore + goldAfter - goldBefore + platinumAfter - platinumBefore;
    int silverToGold = goldAfter - goldBefore + platinumAfter - platinumBefore;
    int goldToPlatinum = platinumAfter - platinumBefore;
    cout<<bronzeToSilver<<"\n";
    cout<<silverToGold<<"\n";
    cout<<goldToPlatinum<<"\n";
    return 0;
}