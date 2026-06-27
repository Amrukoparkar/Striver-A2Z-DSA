#include <bits/stdc++.h>
using namespace std;

int revers(int n){
    int count=0;
    while(n>0){
        int a=n%10;
        cout<<a;
        n=n/10;
    }
}
int main(){
    int N;
    cout<<"enter the n";
    cin>>N;
    int a=revers(N);
    return 0;
}