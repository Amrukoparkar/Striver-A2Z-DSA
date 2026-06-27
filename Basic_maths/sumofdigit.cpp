#include<bits/stdc++.h>
using namespace std;

class sumdigits{
public:
void sum(int n){
        int sum=0;
        while(n>0){
            int a=n%10;
            sum=sum+a;
            n=n/10;
        }
         cout << "Sum of digits = " << sum; 
    }
};
int main(){
    int N;
    cout<<"enter the value of N: ";
    cin>>N;
    sumdigits myobj;
    myobj.sum(N);
}