#include <iostream>
using namespace std;

int fac(int a) {
    int factorial = 1;
    for (int i = 1; i <= a; i++) {
        factorial *= i;
    }
    return factorial;   
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = fac(num);
    cout << "The the factorial from 0 to " << num << " is: " << result << endl;

    return 0;
}
