#include <iostream>
using namespace std;

class Car {
private:
    int speed; // Hidden detail

public:
    void setSpeed(int s) {  
        if (s >= 0)
            speed = s;
    }

    int getSpeed() { 
        return speed;
    }
};

int main() {
    Car myCar;
    myCar.setSpeed(100);     internally
    cout << "Car speed: " << myCar.getSpeed() << " km/h" << endl;
    return 0;
}
