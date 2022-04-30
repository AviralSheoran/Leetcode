class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        // Approaches can be 3 i.e.
        // 1. Brute Force - Simple Any sorting algo
        // 2. Counting Sort - 0(2n)
        // 3. Dutch Flag Algorithm - O(n)
        
        
        // Dutch National Flag Algorithm
        
        // Intuition is this that 
        //      low represents all zeroes are before low
        //      high represents all two's after high
        //      mid represents between like used to sort thing\U0001f605\U0001f63c
        
        int low = 0, mid = 0, high = nums.size() -1;
        
        while (mid <=high) {
            if (nums[mid]==0) {
                swap (nums[low++],nums[mid++]);
            }else if (nums[mid] == 1) {
                mid++;
            }else if(nums[mid]==2) {
                swap (nums[mid], nums[high--]);
            }
        }
    }
};