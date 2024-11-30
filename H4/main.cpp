#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    Car newCar("Corolla","Toyota");
    newCar.setEngine();
    newCar.setWheels();
    newCar.printDetails();
    return 0;
}
