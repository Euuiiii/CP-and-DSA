// Problem: Merge Sorted Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/merge-sorted-array/
// Solved on: 2026-08-17T09:29:32.838Z

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int j = 0,i =m; j < n; j++){
            nums1[i] = nums2[j];
            i++;
        }

        sort(nums1.begin(), nums1.end());
    }
};