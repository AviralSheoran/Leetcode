#include <bits/stdc++.h>
using namespace std;

int main() {
	// Brute Force
	int t;
	cin  >> t;
	
	while (t--) {
	    int n;
	    cin >>n;
	    int arr[n];
	    for (int i=0;i<n;++i) {
	        cin >> arr[i];
	    }
	    
	    for (int j=n-1;j>=0;--j) {
	        cout << arr[j] << " ";
	    }
	    cout << endl;
	}
	
	
	return 0;
}