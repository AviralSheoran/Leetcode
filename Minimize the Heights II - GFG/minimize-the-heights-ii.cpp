// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        
        // Brute Force
        
        // Sorted the array 
        sort(arr, arr+n);
        
        // to find the initial difference
        int ans = arr[n-1] - arr[0];
        
        // Initial smallest and largest values
        int smallest = arr[0] +k;
        int largest = arr[n-1] - k;
        
        // Will look more into it in loop
        int mini,maxi;
        
        for (int i = 0 ; i < n-1 ; i++) {
            
            // updating mini to find the minimum value while comparing it with smallest
            mini = min(smallest, arr[i+1] -k);
            
            // updating maxi to find the maximum value while comparing it with largest
            maxi = max(largest, arr[i] + k);
            
            
            // Condition: If mini is negative, then it will increase the ans 
            // eg. mini = -2
                // ans = 5 - (-2) = 7
            if(mini < 0) {
                continue;
            }
            
            // returning ans while comparing it with the initial ans
            ans = min(ans,maxi-mini);
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends