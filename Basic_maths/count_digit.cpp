#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int count = 0;

    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int main()
{
    int N;

    cout << "Enter a number: ";
    cin >> N;

    int digits = countDigits(N);

    cout << "Number of digits in the number is " << digits;

    return 0;
}