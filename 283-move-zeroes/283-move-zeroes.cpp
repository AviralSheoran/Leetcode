class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // Two Pointer Approach 
        
        int balls = 0 ;
        for (int i = 0; i< nums.size();i++) {
            if (nums[i] != 0) {
                nums[balls++] = nums[i];
            }
        }
        
        for (int i = balls; i<nums.size() ; i++) {
            nums[i] = 0;
        }
    }
};