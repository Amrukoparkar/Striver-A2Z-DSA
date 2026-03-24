#include <iostream>
using namespace std;

class student {
private:
    int marks = 25;

public:
    friend void dismarks(student s);
};

// ✅ function definition
void dismarks(student s) {
    cout << "Marks: " << s.marks << endl;
}

int main() {
    student s1;
    dismarks(s1);
    return 0;
}
