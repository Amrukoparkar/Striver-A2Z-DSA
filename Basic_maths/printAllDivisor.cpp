#include<bits/stdc++.h>
using namespace std;
class divisor{
public:
void divi(int N){
    for(int i=1;i<=N;i++){
        if(N % i==0){
             cout<<i<<" ";
        }
    }
}
};
int main(){
    int N;
    cout<<"enter the value of N: ";
    cin>>N;
    divisor myobj;
    myobj.divi(N);
}