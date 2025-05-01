#include <iostream>
using namespace std;

int main() {
    int original = 50;
    int& ref = original;  

    cout << "Original value: " << original << endl;
    cout << "Reference value: " << ref << endl;

    ref = 100;  // Changing the value using the reference

    cout << "Original after modifying ref: " << original << endl;

    return 0;
}
