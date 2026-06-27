#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int digitCount = 0;

    while(n > 0)
    {
        int a = n % 10;
        cout << "The digit is " << a << endl;

        digitCount++;
        n = n / 10;
    }

    cout << "The count is = " << digitCount << endl;

    return digitCount;
}

int main()
{
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    int digit = countDigits(N);


    return 0;
}