#include<iostream>
using namespace std;

int revers(int n)
{
    int rev = 0;

    while(n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int R = revers(N);

    cout << "The reverse of the number is = " << R;

    return 0;
}