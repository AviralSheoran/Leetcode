// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // 1. Have to make two arrays neg and pos
        // 2. Store negative elements in neg and positive in pos
        // 3. Make a new loop to combine the pos and neg array
        
        vector<int> neg;
        vector<int> pos;
        
        int j=0;
        
        for (int i=0;i<n;i++) {
            if (arr[i]<0) {
                neg.push_back(arr[i]);
            }else {
                pos.push_back(arr[i]);
            }
        }
        
        for (int i=0;i<n;i++) {
            if (i<pos.size()) {
                arr[i]=pos[i];
            }else {
                arr[i] = neg[j++];
            }
        }
        
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends