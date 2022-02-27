#include <bits/stdc++.h>
using namespace std;

int main() {
	// ----------------------Brute Force-----------------------
	/*
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
	*/
	
	// -------------------------Using STL-----------------------------
	int t;
	cin >> t;
	
	while (t--) {
	    vector<int> v;
	    
	    int n;
	    cin >> n;
	    
	    // Function to take input of array
	    for (int i=0;i<n;++i) {
	        int x;
	        cin >> x;
	        v.push_back(x);
	    }
	    
	    reverse(v.begin(),v.end()); // Reverses the array
	    
	    // Function to print the array
	    for (int i=0;i<v.size();++i) {
	        cout << v[i] << " ";
	    }
	    cout << endl;
	   
	}

	
	
	return 0;
}