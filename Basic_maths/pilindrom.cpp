#include<bits/stdc++.h>
using namespace std;

class Reverse{
public:
    void re(int n){
        int original = n;
        int rev = 0;

        while(n > 0){
            int a = n % 10;
            rev = rev * 10 + a;
            n = n / 10;
        }

        cout << "Reversed number: " << rev << endl;

        if(original == rev){
            cout << "It's a palindrome";
        }
        else{
            cout << "It's not a palindrome";
        }
    }
};

int main(){
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    Reverse myobj;
    myobj.re(N);

    return 0;
}