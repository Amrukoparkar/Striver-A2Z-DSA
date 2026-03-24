#include <iostream>
using namespace std;

int sumofdigit(int num) {
    int digsum = 0;
    while(num>0) {
        int digit = num % 10;
        num = num / 10;
         digsum += digit;
       }
    return digsum;
}

int main() {
    int num;
    cout << "Enter a a digit: ";
    cin >> num;

    int result = sumofdigit(num);
    cout << "The sum from 0 to " << num << " is: " << result << endl;

    return 0;
}
