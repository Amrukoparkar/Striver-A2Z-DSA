#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printName(string name, int count, int N) {
        if (count == N)
            return;

        cout << name << "\n";

        printName(name, count + 1, N);
    }
};

int main() {
    Solution sol;
    int N;
    cout<<"enter the value of N:";
    cin>>N;
    string name;
    cout<<"enter the name: ";
    cin>>name;
    // string name = "Ashish";

    sol.printName(name, 0, N);

    return 0;
}
