// Problem: First Unique Character in a String
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/first-unique-character-in-a-string/
// Solved on: 2026-08-08T17:10:45.821Z

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        for(char c : s){
            freq[c - 'a']++;
        }

        for(int i =0; i < s.length(); i++){
            if(freq[s[i] -'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};