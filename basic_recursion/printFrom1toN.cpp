#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printName(int count, int N) {
        if (count > N)
            return;
            cout<<count<<endl;

        printName(count + 1, N);
    }
};

int main() {
    Solution sol;
    int N;
    cout<<"enter the value of N:";
    cin>>N;
    

    sol.printName(1, N);

    return 0;
}
