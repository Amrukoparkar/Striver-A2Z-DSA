#include<iostream>
using namespace std;    

int myFunction() {
    cout << "Hello from myFunction!" << endl;
    return 3;
}
int main() {
   int val=myFunction();
   cout << "The returned value is: " << val << endl;
    return 0;
}