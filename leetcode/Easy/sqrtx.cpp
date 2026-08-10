// Problem: Sqrt(x)
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/sqrtx/
// Solved on: 2026-08-10T16:46:01.086Z

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int n = 1;

        while(n <= x /n){
            n++;
        }

        return n - 1;
    }
};