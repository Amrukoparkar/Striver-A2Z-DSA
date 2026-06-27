#include<bits/stdc++.h>
using namespace std;

class greaterNum {
public:
    void large(int a, int b, int c) {

        if (a >= b && a >= c) {
            cout << "a is largest";
        }
        else if (b >= a && b >= c) {
            cout << "b is largest";
        }
        else {
            cout << "c is largest";
        }
    }
};

int main() {
    int a, b, c;

    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    greaterNum obj;
    obj.large(a, b, c);

    return 0;
}