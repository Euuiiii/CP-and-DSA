// Problem: Max Consecutive Ones
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/max-consecutive-ones/
// Solved on: 2026-08-13T10:41:21.802Z

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        
        for(int i =0; i< nums.size(); i++){
            if(nums[i] == 1){
                count++;
                if(count > maxCount)
                    maxCount = count;
            }else{
                count = 0;
            }
        }
        
        return max(maxCount, count);
    }
};