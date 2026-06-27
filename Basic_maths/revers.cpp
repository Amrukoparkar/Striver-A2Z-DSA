#include<bits/stdc++.h>
using namespace std;
class revers{
    public:
    void re(int n){
        while(n>0){
            int a=n%10;
            cout<<a;
            n=n/10;
        }
    }
};
int main(){
    int N;
    cout<<"enter the value of N"; 
    cin>>N;   
    revers myobj;
    myobj.re(N);
    return 0;
}