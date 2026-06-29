#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfNaturalNumbers(int N) {
        if (N == 1) {
            return 1;
        }
        return N + sumOfNaturalNumbers(N - 1);
    }
};

// Driver code
int main() {
    Solution obj;
    int N;
    cin >> N;
    cout << obj.sumOfNaturalNumbers(N) << endl;
    return 0;
}
