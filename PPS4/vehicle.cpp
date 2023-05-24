#include <iostream>
#include <cstdlib>
using namespace std;

class Vehicle{
    int speed;
};

class Car : public Vehicle{
};

class Airplane : public Vehicle{
    int altitude;
};