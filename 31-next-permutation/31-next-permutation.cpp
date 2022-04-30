class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        // Brute Force Optimal Approach
        
        int n = nums.size(), k , l;
        
        
        // TO find the breakpoint from the end 
        for (k = n-2; k>=0; k--) {
            if (nums[k] < nums[k+1]) {
                break;
            }
        }
        
        
        // If there is no breakpoint i.e. its in decreasing order, just reverse         // it
        if (k<0) {
            reverse(nums.begin(),nums.end());
        }else {
            
            // To find the element with whom to swap the breakpoint with 
            for (l = n-1; l>k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            }
        
        // Now swap the breakpoint with the element you just find in the above          // loop
        swap (nums[k],nums[l]);
        
        // After the value of l, just reverse the array or string you have given         // to obtain the solution
        reverse(nums.begin()+k+1,nums.end());
        
        }
          
    }
};