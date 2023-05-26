/*
7. Consider creating a program to simulate various vehicle types. In addition to making a
basic class named Vehicle that has universally applicable properties and methods, you
also want to make distinct classes for various kinds of vehicles, such as cars and
airplanes. The distinct traits and procedures that distinguish each vehicle class from other
sorts of vehicles are their own. Nonetheless, several vehicle types might have things in
common and work in similar ways. A plane, for instance, also has an altitude, while both
a car and a plane have a maximum speed and a present speed. you can create a Vehicle
class that contains general properties and methods, and then create specific vehicle
classes that inherit from Vehicle as well as from each other. Create a C++ code snippet for
the above scenario that demonstrates inheritance.
*/

#include <iostream>
using namespace std;

class Vehicle {
protected:
    int max_speed;
    int present_speed;
public:
    void setMaxSpeed(int speed) {
        max_speed = speed;
    }
    void setPresentSpeed(int speed) {
        present_speed = speed;
    }
    void displaySpeed() {
        cout << "Present speed: " << present_speed << endl;
    }
};

class Car : public Vehicle {
private:
    int num_of_doors;
public:
    Car(int doors) {
        num_of_doors = doors;
    }
    int getNumOfDoors() {
        return num_of_doors;
    }
};

class Airplane : public Vehicle {
private:
    int altitude;
public:
    Airplane(int alt) {
        altitude = alt;
    }
    int getAltitude() {
        return altitude;
    }
};

class Jet : public Airplane {
private:
    int num_of_engines;
public:
    Jet(int engines, int alt) : Airplane(alt) {
        num_of_engines = engines;
    }
    int getNumOfEngines() {
        return num_of_engines;
    }
};

int main() {
    Car myCar(4);
    myCar.setMaxSpeed(100);
    myCar.setPresentSpeed(60);
    cout << "My car has " << myCar.getNumOfDoors() << " doors." << endl;
    myCar.displaySpeed();

    Airplane myPlane(30000);
    myPlane.setMaxSpeed(500);
    myPlane.setPresentSpeed(400);
    cout << "My plane is flying at an altitude of " << myPlane.getAltitude() << " feet." << endl;
    myPlane.displaySpeed();

    Jet myJet(2, 40000);
    myJet.setMaxSpeed(800);
    myJet.setPresentSpeed(600);
    cout << "My jet has " << myJet.getNumOfEngines() << " engines and is flying at an altitude of " << myJet.getAltitude() << " feet." << endl;
    myJet.displaySpeed();

    return 0;
}