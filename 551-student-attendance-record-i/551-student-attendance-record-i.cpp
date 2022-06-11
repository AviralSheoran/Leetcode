class Solution {
public:
    bool checkRecord(string s) {
        
        int a =0, cons = 0;
        
        for (int i = 0; i<s.size();i++) {
            if (s[i] == 'A') {
                a++;
                cons = 0;
                if (a >=2 ) {
                    return false;
                }
            }else if (s[i] == 'P') {
                cons = 0;
            }
            else if (s[i] == 'L') {
                cons++;
                if (cons >= 3) {
                    return false;
                }
            }  
        }return true;
    }
};