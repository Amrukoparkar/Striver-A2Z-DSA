#include <bits/stdc++.h> 
int occursOnce(vector<int> &a, int n){
    int result = 0;
    
    for(int i = 0; i < n; i++){
        result ^= a[i];
    }
    
    return result;
}
