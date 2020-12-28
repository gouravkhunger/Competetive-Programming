// https://atcoder.jp/contests/abc184/tasks/abc184_b
// Quizzes
// File Creation Date: <date>
// Author: Gourav(https://github.com/GouravKhunger)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    FIO;
    int n, x;
    cin>>n>>x;
    int score = x;
    FOR(i, 0, n-1){
        char s;
        cin>>s;
        if(s=='o')score++;
        else if(score>0&&s=='x') score--;
    }
    cout<<score;
    return 0;
}