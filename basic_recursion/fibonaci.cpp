#include <bits/stdc++.h>
using namespace std;


int fibonacci(int N) {
    
    if (N <= 1) {
        return N;
    }

    
    int last = fibonacci(N - 1);   // (N-1)th Fibonacci
    int slast = fibonacci(N - 2);  // (N-2)th Fibonacci

    return last + slast;
}

int main() {
    int N = 4;
    cout << fibonacci(N) << endl; // Output: 3 (0 1 1 2 3)
    return 0;
}
