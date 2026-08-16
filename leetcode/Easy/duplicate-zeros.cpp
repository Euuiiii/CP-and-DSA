// Problem: Duplicate Zeros
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/duplicate-zeros/
// Solved on: 2026-08-16T14:55:15.846Z

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n = arr.size();

        int i = 0;

        while(i < n){
            if(arr[i] == 0){
                arr.insert(arr.begin() + i, 0);
                i += 2;
            } else{
                i++;
            }
        }

        arr.resize(n);
    }
};