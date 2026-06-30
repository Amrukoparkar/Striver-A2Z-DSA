#include<bits/stdc++.h>
using namespace std;

int fac(int n){
    if(n==0){
        return 1;
    }
    return n * fac(n-1);
}

int main(){
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Factorial = " << fac(N) << endl;
    return 0;
}