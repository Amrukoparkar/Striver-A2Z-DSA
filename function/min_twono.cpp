#include<iostream>
using namespace std;
int minTwoNo(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }       
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int minNum = minTwoNo(num1, num2);
    cout << "The minimum number is: " << minNum << endl;
    return 0;
}