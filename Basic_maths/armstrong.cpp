#include <bits/stdc++.h>
using namespace std;

class Armstrong {
public:
    void arms(int n) {
        int a = n;
        int sum = 0;

        while (n > 0) {
            int ld = n % 10;
            sum += ld * ld * ld;
            n /= 10;
        }

        if (a == sum)
            cout << "Armstrong";
        else
            cout << "Not Armstrong";
    }
};

int main() {
    Armstrong obj;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    obj.arms(n);

    return 0;
}