#include "car.h"

Car::Car() {}

Car::Car(string mdl, string brd)
{
    setModel(mdl);
    setBrand(brd);
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");
    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");
    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");
    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

string Car::getModel()
{
    return model;
}

void Car::setModel(string value)
{
    model = value;
}

string Car::getBrand()
{
    return brand;
}

void Car::setBrand(string value)
{
    brand = value;
}

void Car::printDetails()
{
    cout << "Auto: "+getModel()+" "+getBrand()<<endl;
    cout << "Moottori: "<<objEngine.getHorsepower()<<" hp, "<<objEngine.getDisplacement()<<" L"<< endl;
    cout << "Rengas 1: "<<objWheel1.getSize()<<" tuumaa, "+objWheel1.getType()<<endl;
    cout << "Rengas 2: "<<objWheel2.getSize()<<" tuumaa, "+objWheel2.getType()<<endl;
    cout << "Rengas 3: "<<objWheel3.getSize()<<" tuumaa, "+objWheel3.getType()<<endl;
    cout << "Rengas 4: "<<objWheel4.getSize()<<" tuumaa, "+objWheel4.getType()<<endl;
}
