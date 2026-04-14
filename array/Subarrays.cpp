#include <bits/stdc++.h> 
int arithmeticSubarrays(vector<int> &a, int n) {
    if (n < 3) return 0;

    int ans = 0;
    int curr = 0; // dp[i- 1]

    for (int i = 2; i < n; i++) {
        if (a[i] - a[i-1] == a[i-1] - a[i-2]) {
            curr = curr + 1;
            ans += curr;
        } else {
            curr = 0;
        }
    }

    return ans;
}
