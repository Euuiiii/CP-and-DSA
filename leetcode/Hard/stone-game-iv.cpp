// Problem: Stone Game IV
// Platform: leetcode
// Rating/Difficulty: Hard
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/stone-game-iv/
// Solved on: 2026-08-10T02:59:13.722Z

class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool> dp(n + 1, false);
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j * j <= i; j++) {
                if(!dp[i - j*j]) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};