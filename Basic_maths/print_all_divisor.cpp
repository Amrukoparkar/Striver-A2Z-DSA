#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_all_divisor(int n) {
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }}

    int main() {
    int n;
    cout<<"Enter a number: ";               
    cin>>n;
    print_all_divisor(n);
    return 0;
}
    