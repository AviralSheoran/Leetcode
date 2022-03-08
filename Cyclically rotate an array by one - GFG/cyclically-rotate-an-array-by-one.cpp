// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    // Brute Force
    
    // Made a integer to store the first element of array
    int temp1 = arr[n-1];
    
    
    // Loop through the array such that only 1 element(use debugger) i.e. only 1 element would not be change and will be overlayed by some other value 
    for (int i=n-1;i>=0;i--) {
        arr[i] = arr [i-1];
    }
    
    // Giving that value back
    arr[0] = temp1;
} 