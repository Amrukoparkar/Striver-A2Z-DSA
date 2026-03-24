#include <iostream>
using namespace std;

int add(int a) {
    int sum = 0;
    for (int i = 0; i <= a; i++) {
        sum += i;
    }
    return sum;   // ✅ after loop
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = add(num);
    cout << "The sum from 0 to " << num << " is: " << result << endl;

    return 0;
}
