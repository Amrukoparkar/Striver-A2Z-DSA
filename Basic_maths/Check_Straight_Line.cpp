#include <bits/stdc++.h> 
using namespace std;

bool gemsInAStraightLine(vector<vector<int>> &points, int n)
{
    if(n <= 2) return true;
    
    int x1 = points[0][0], y1 = points[0][1];
    int x2 = points[1][0], y2 = points[1][1];
    
    for(int i = 2; i < n; i++) {
        int x3 = points[i][0];
        int y3 = points[i][1];
        
        // Cross multiplication check
        if((y2 - y1) * (x3 - x2) != (y3 - y2) * (x2 - x1)) {
            return false;
        }
    }
    
    return true;
}
