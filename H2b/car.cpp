#include "car.h"
#include <iostream>

using namespace std;

Car::Car(string newBrand, string newModel, int newYearModel) {
    brand = newBrand;
    model = newModel;
    yearModel = newYearModel;
}

void Car::printData(){
    cout << brand + " " + model + " " << yearModel << endl<<endl;
}
