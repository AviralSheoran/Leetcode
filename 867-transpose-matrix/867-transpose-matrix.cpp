class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        // Brute Force
        
        // Approach is Simple
        // Make a new matrix of m,n before it was n,m 
        // And just change the positions of elements using two for loops
        
        // Time complexity - O(n*m)
        // Space complexity - O(n*m)
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> res(m,vector<int> (n,0));
        
        for (int i = 0; i<n; ++i) {
            for (int j=0; j<m; ++j ) {
                res[j][i] = matrix[i][j];                
            }
        }
        
        return res;
    }
};