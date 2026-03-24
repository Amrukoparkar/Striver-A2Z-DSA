#include <iostream>
using namespace std;

class app {
    private:
    string name="amruta";
    public:
    int id=123;
};
class softwre: public app{
    public:
    void display(){ //private member of base class is not accessible in derived class
        cout<<id; //public member of base class is accessible in derived class
    }       

};
int main() {
    softwre s1;
    s1.display();
    return 0;
}
