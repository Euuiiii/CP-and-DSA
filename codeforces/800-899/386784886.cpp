// Problem: Watermelon
// Platform: codeforces
// Contest: 800
// Rating/Difficulty: 800
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/contest/4/submission/386784886
// Solved on: 2026-08-13T09:04:41.264Z

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);


int main(){
    FAST_IO;
    int w;
    cin >> w;

    if(w % 2 == 0 && w>= 4){
        cout << "YES";
    } else{
        cout << "NO";
    }

 
    return 0;
}