// Problem: Remove Duplicates from Sorted Array II
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
// Solved on: 2026-08-13T10:17:45.458Z

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2;

        if(nums.size() <= 2) return nums.size();

        for(int i =2; i < nums.size(); i++){
            if(nums[i] != nums[k - 2]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};