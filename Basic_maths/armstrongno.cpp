#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void checkArmstrong(int n) {
    int original = n;
    int sum = 0;

    while(n > 0) {
        int last_digit = n % 10;
        sum = sum + pow(last_digit, 3);
        n = n / 10;
    }

    if(sum == original) {
        cout << "The number is an Armstrong number.";
    } else {
        cout << "The number is not an Armstrong number.";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    checkArmstrong(n);
    return 0;
}