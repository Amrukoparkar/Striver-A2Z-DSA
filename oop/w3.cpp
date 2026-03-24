#include <iostream>
using namespace std;
class book{
    public:
    string title;
    string author;
    int year;
};

int main() {
    book book1;
    book book2;
    cout<<
    "Enter title of book 1: ";
    cin>>book1.title;
    cout<<"Enter author of book 1: ";
    cin>>book1.author;
    cout<<"Enter year of book 1: "; 
    cin>>book1.year;
    cout<<"Enter title of book 2: ";        
    cin>>book2.title;
    cout<<"Enter author of book 2: ";   
    cin>>book2.author;
    cout<<"Enter year of book 2: "; 
    
    return 0;
    
}
