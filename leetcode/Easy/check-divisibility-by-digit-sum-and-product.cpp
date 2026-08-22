// Problem: Check Divisibility by Digit Sum and Product
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
// Solved on: 2026-08-22T05:21:58.850Z

class Solution {
public:
    bool checkDivisibility(int n) {
        
        int sum = 0;
        int product = 1;

        int temp = n;

        while(n>0){
            int digit = n % 10;
            n /= 10;

            sum += digit;
            product *=digit;
        }
        return temp % (sum + product) == 0;
    }
};