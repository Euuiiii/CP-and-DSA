// Problem: Remove Element
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/remove-element/
// Solved on: 2026-08-10T16:37:02.326Z

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for(int i =0 ;i < nums.size();i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            } 
        }

        return k;
    }
};