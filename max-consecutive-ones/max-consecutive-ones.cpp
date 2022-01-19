class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0;
        int ans = 0;
        
        for ( int i = 0; i<nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                ans = max(count,ans);
                
                // In the first Iteration ans = count
                // In second iteration if the count is greater than ans then ans will be appointed as count
                // Thereafter the same process goes on\U0001f642
            }else {
                count = 0; 
            }
        }
        return ans;
    }

};