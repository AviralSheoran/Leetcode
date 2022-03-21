class Solution {
public:
    void reverseString(vector<char>& s) {
        // Two Approaches
        
        // Brute Force / Two pointer Approach
        int n = s.size();
        int i =0, j =n-1;
        
        for (i = 0; i<n/2; i++) {
            swap(s[i],s[j-i]);
        }
        
        // Inbuilt Function in C++
        // reverse(s.begin(), s.end());
    }
};