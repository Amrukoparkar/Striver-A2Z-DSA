#include<bits/stdc++.h>
using namespace std;
class fibonaic{
    public:
    void fib(int n ){
        int a=0,b=1;
        for(int i=1;i<=n;i++){
           cout << a << " ";
           int c=a+b;
        a=b;
        b=c;
        }
        
    }
};
int main(){
    int N;
    cout<<"enter the value of N:";
    cin>>N;
    fibonaic myobj;
    myobj.fib(N);
    return 0;
}