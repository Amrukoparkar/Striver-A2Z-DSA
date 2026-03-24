#include<iostream>
using namespace std;
int main(){
int myarray[]={1,2,3,4,5};
int i;
int min=myarray[0];
for(i=0;i<4;i++){
    if(myarray[i]<min)
    min=myarray[i];
}
cout<<"samll number "<<min;
return 0;
}