#include <iostream>

// Base Class 1
class Vehicle {
public:
    void drive() {
        std::cout << "This vehicle can be driven." << std::endl;
    }
};

// Base Class 2
class Boat {
public:
    void sail() {
        std::cout << "This boat can be sailed." << std::endl;
    }
};

// Derived Class inheriting from both Vehicle and Boat
class AmphibiousVehicle : public Vehicle, public Boat {
public:
    void operate() {
        std::cout << "Operating the amphibious vehicle:" << std::endl;
        drive(); // Inherited from Vehicle
        sail();  // Inherited from Boat
    }
};

int main() {
    AmphibiousVehicle myAmphibian;
    myAmphibian.operate();

    return 0;
}