// Problem: Elevator Requests I
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/elevator-requests-i/
// Solved on: 2026-08-15T14:58:52.195Z

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int totalTime = 0;
        int currFloor = 0;

        for(int target : requests){
            totalTime += abs(target - currFloor);
            currFloor = target;
        }

        return totalTime;
    }
};