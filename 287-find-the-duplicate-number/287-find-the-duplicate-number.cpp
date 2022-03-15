class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Brute Force
        
        int count = 0;
       //  int n = nums.size();
        
        sort (nums.begin(), nums.end());
        
        for (int i = 0;i< nums.size() ;i++) {
            
                if (nums[i] == nums[i+1]) {
                    count = nums[i];
                    return count;
                }
            
        }
        return count;
    }
};