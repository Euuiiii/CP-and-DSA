// Problem: Find the Lexicographically Smallest Valid Sequence
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/find-the-lexicographically-smallest-valid-sequence/
// Solved on: 2026-08-08T05:44:10.842Z

class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<int> last(m, -1);
        int j = m - 1;
        int i = n - 1;

        while (i >= 0 && j >= 0) {
            if (word1[i] == word2[j]) {
                last[j] = i;
                j--;
            }
            i--;
        }

        vector<int> ans;
        i = 0;
        bool mismatch = false;

        for (j = 0; j < m; j++) {
            while (i < n) {
                if (word1[i] == word2[j]) {
                    ans.push_back(i);
                    i++;
                    break;
                }
                else if (!mismatch) {
                    if (j == m - 1 || i < last[j + 1]) {
                        ans.push_back(i);
                        i++;
                        mismatch = true;
                        break;
                    }
                }
                i++;
            }
            if (ans.size() != j + 1)
                return {};
        }
        return ans;
    }
};