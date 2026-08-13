// Problem: Find Numbers with Even Number of Digits
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// Solved on: 2026-08-13T10:59:11.333Z

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int num : nums){
            int count = log10(num) + 1;

            if(count % 2 == 0){
                result++;
            }
        }
        return result;
    }
};

//another way: while  num > 0 num = num /= 10 count++ then if count % 2 = 0 res++