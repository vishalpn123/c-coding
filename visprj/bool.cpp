#include <iostream>
using namespace std;

int main() {
    bool isRaining = true;
    bool isSunny = false;

    if (isRaining) {
        cout << "It is raining." << endl;
    }

    if (isSunny == false) {
        cout << "It is not sunny." << endl;
    }


    bool goOutside = !isRaining && isSunny;
    cout << "Should I go outside? " << (goOutside ? "Yes" : "No") << endl;

    return 0;
}
