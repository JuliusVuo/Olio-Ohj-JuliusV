#include "car.h"
#include <iostream>

using namespace std;

Car::Car(string newBrand, string newModel, int newYearModel) {
    setBrand(newBrand);
    setModel(newModel);
    setYearModel(newYearModel);
}

void Car::printData(){
    cout << brand + " " + model + " " << yearModel << endl<<endl;
}


void Car::setBrand(string newBrand){
    brand = newBrand;
}

void Car::setModel(string newModel){
    model = newModel;
}

void Car::setYearModel(int newYearModel){
    yearModel = newYearModel;
}
