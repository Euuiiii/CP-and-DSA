// Problem: Stone Game IX
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/stone-game-ix/
// Solved on: 2026-08-16T09:29:10.397Z

class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int a =0, b =0, c =0;
        

        for(int stone : stones){
            if(stone % 3 == 0) a++;
            else if(stone % 3 == 1) b++;
            else c++;

        }

        if(a % 2 == 0){
            return b > 0 && c > 0;
        }

        return abs(b - c) > 2;
    }
};