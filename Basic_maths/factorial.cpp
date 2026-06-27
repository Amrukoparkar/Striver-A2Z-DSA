#include <bits/stdc++.h>
using namespace std;

class factor{
public:
    void factorial() {
        long long fac = 1;
        int N;

        cout << "Enter the value of N: ";
        cin >> N;

        for(int i = 1; i <= N; i++) {
            fac *= i;
        }

        cout << "Factorial = " << fac;
    }
};

int main() {
    factor myobj;
    myobj.factorial();
    return 0;
}