// Check if Strings Can be Made Equal With Operations
#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        string a = "";
        a += s1[0];
        a += s1[2];
        
        string b = "";
        b += s2[0];
        b += s2[2];
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        if (a != b) return false;
        
        
        string c = "";
        c += s1[1];
        c += s1[3];
        
        string d = "";
        d += s2[1];
        d += s2[3];
        
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        
        return c == d;
    }
};
int main() {
    Solution sol;
    string s1 = "abcd";
    string s2 = "cdab";
    cout << sol.canBeEqual(s1, s2) << endl; 
    return 0;
}