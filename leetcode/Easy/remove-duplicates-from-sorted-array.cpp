// Problem: Remove Duplicates from Sorted Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Solved on: 2026-08-13T08:40:03.643Z

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

        int i  = 1;

        for(int j = 1; j < nums.size(); j++){
            if(nums[j] != nums[i - 1]){
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};