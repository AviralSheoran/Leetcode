class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // We are replacing the element of array nums 1 with nums 2
        // From behind to decrease the time complexity 
        // Use debugger to understand this clearly or refer \U0001f447
        
        /* https://leetcode.com/problems/merge-sorted-array/discuss/600243/C%2B%2B-solution-O(m%2Bn)-solution-with-detailed-explanation. */
        
        
        int i =m-1;
        int j =n-1;
        int k=m+n-1;
        
        while ( i>=0 && j>=0 ) {
            
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
                k--;
            }else {
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        
        // while(i>=0) {
        //     nums1[k--]=nums1[i--];
        // }
        
        while (j>=0) {
            nums1[k--]=nums2[j--];
        }
        
    }
};