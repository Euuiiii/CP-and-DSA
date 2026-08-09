// Problem: Minimum Total Price After Applying Discounts
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/minimum-total-price-after-applying-discounts/
// Solved on: 2026-08-09T02:57:39.199Z

class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        double t_sum = 0.0;
        int paired_count = min(prices.size(), discounts.size());

        for(int i =0; i <paired_count; ++i){
            t_sum += static_cast<double>(prices[i]) * (100 - discounts[i])/100.0;
        }

        for(size_t i = paired_count; i< prices.size(); ++i){
            t_sum += prices[i];
        }

        return t_sum;
    }
};