class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        // Brute Force 
        
        // col0 is acting as a bool. fmi revise notebook
        int col0 = 1 , rows = matrix.size() , cols = matrix[0].size();
        
        
        // LOOP-1
        for (int i =0; i<rows; i++) {
            
            /* Checks if any element in first col is 0 then set col = 0 (false ) so that when code is done we can assign zeroes to the first col */
            if(matrix[i][0] == 0) col0 = 0; 
            
            
            // Loop for Checking and putting zeroes in dummy arrays 
            for (int j =1; j<cols ; j++) 
                if (matrix [i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;    
            
        }
        
        
        
        // LOOP-2
        // Now, traversing the matrix from back 
        for (int i = rows -1; i>=0;i--) {
            for (int j= cols-1 ; j>=1 ; j--) 
                
                // putting values 0 if in dummy array found 0 
                if (matrix[i][0] == 0 ||  matrix[0][j] == 0)
                    matrix[i][j] = 0;
            
            // Now, assign the col0 elements to '0'
            if (col0 == 0) matrix[i][0] = 0;
        
        }
        }
};