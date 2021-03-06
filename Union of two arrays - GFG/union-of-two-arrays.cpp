// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
        // Brute Force/ Two Pointer Approach
        
        // Making a new array
        vector<int> temp;
        int i,j;
        
        // taking input in new array
        for ( i=0;i<n;i++) 
            temp.push_back(a[i]);
        for (i = 0; i< m ;i++)
            temp.push_back(b[i]);
            
        // sort the array    
        sort(temp.begin(), temp.end());
        
        i = 0;
        j = 1;
        
        int count = 1;
        
        
        while (j< (m+n)) {
            
            if (temp[i] != temp[j]) {
                count++;
                i = j;
            }
            j++;
        }
        
        return count;
        
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends