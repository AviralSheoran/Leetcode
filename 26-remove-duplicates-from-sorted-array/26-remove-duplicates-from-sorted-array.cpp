class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // Two Pointer Approach
        
        int i = 0;
        int j = 1;
        
        for (j =1;j<nums.size();j++) {
            if(nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        
        return i+1;
    }
};