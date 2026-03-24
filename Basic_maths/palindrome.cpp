#include <iostream>
using namespace std;

int count(int n) {
    while(n>0){
        int last_digit =n%10;
        n=n/10;
        cout<<last_digit;

         if (n== last_digit){
        cout<<"The number is a palindrome.";
    }
    else{
        cout<<"The number is not a palindrome.";
    }
    }
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    count(n);
    return 0;
}