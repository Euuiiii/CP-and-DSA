// Problem: Two Sum
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: javascript
// Verdict: Accepted
// URL: https://leetcode.com/problems/two-sum/
// Solved on: 2026-08-09T04:14:48.971Z

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    
    for(let i = 0; i < nums.length; i++){
        for(let j = i + 1; j < nums.length; j++){

            if(nums[i] + nums[j] === target){
                return [i,j];
            }
        }
    }
};