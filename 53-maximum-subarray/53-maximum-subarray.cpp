class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // Brute Force || Kadane's Algorithm 
        
        // P.S. - Can be solved using these approaches
        // DP - Memozation
        //    - Tabulation
        // Kadane's Algorithm (I solved using this)
        // Divide and Conquer 
        
        
        // Approach is simple, if the mamx is not negative or smaller
        // than zero we add the preceeding elements, and if it is 
        // negative, we assign it to zero
        
        // AUTO KEYWORD USED
        
        int sum = 0;
        int maxm = INT_MIN;
        
        for (auto it: nums) {
            sum += it;
            maxm = max(sum, maxm);
            if(sum < 0) sum = 0;
        }
        return maxm;
    }
};