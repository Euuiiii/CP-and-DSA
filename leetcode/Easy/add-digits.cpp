// Problem: Add Digits
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/add-digits/
// Solved on: 2026-08-08T16:33:56.802Z

class Solution {
public:
    int addDigits(int num) {
        while(num >= 10){
            int sum =0;

            while(num > 0){
                int j = num % 10;
                sum = sum + j;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};