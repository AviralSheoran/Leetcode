// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        // Kadane's Algorithm
        
        // First Made an integer to see if the element is negative or not
        // Then, Using kadane's Algorithm 
        
        
        int mx = *max_element (arr,arr+n);
        
        if (mx<0) {
            return mx;
        }

        int max_so_far = INT_MIN;
        int max_ending_here = 0;
        
        for (int i=0; i<n;i++) {
            max_ending_here = max_ending_here + arr[i];
            
            if (max_so_far < max_ending_here) {
                max_so_far = max_ending_here;
            }
            if (max_ending_here < 0) {
                max_ending_here = 0;
            }
        }
        
        return max_so_far;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends