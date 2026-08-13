// Problem: Palindrome Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/palindrome-number/
// Solved on: 2026-08-13T16:11:00.885Z

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long long rev = 0; 

        while (x != 0) {
            int digit = x % 10;
            rev = (rev * 10) + digit;
            x /= 10;
        }
        return original == rev;
    }
};