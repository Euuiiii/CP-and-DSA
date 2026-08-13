// Problem: Squares of a Sorted Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/squares-of-a-sorted-array/
// Solved on: 2026-08-13T11:38:58.453Z

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int &num : nums){
            num *= num;
        }

        sort(nums.begin(), nums.end());
        return nums;
    }
};