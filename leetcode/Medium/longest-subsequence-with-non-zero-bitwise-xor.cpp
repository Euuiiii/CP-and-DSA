// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
// Solved on: 2026-08-15T13:57:00.930Z

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int totalXor = 0;
        bool allZero = true;

        for (int x : nums) {
            totalXor ^= x;
            if (x > 0) {
                allZero = false;
            }
        }
        if (totalXor > 0) {
            return n;
        }
        return allZero ? 0 : n - 1;
    }
};