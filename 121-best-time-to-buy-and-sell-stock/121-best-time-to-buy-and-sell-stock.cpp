class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // Brute Force Optimal 
        
        
        int profit = 0;
        int minPrice = INT_MAX;
        
        // Linearly Traveral , One pass Algorithm
        
        for (int i =0 ; i<prices.size();i++) {
            
            // saving and updating the minimum element 
            minPrice = min(minPrice , prices[i]);
            
            // updating the maxProfit 
            profit = max(profit, prices[i] - minPrice);
        }
        
        return profit;
    }
};