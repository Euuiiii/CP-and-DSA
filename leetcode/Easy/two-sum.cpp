// Problem: Two Sum
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/two-sum/
// Solved on: 2026-08-09T04:15:29.163Z

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0 ;i < nums.size();  i++){
            for(int j = i + 1; j< nums.size(); j++){
                if(nums[i] + nums[j] == target && i != j){
                    return {i, j};
                }
            }
        }
        return {};
    }
};
