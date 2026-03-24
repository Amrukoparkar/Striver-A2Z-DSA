#include<iostream>
using namespace std;
int main(){
    int i;
    int myarray[]={1,2,3,4,5};
    int max=myarray[0];
    for(i=0;i<5;i++){
        if(myarray[i]>max){
            max=myarray[i];
            
        }
          
    }
    cout<<"the grater number is  "<<max<<endl;
    return 0;
    
}